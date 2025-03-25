#include<stdio.h>
#include<string.h>

typedef struct SinhVien{
	char hoTen[50];
	int tuoi;
	float diemTB;
	struct SinhVien* next;
}SinhVien;

typedef struct {
	SinhVien* first;
}List;

SinhVien* taoSV(){
	SinhVien* sv = (SinhVien*)malloc(sizeof(SinhVien));
	printf("Nhap ho ten: ");
	fflush(stdin);
	gets(sv->hoTen);
	
	printf("Nhap tuoi: ");
	scanf("%d", &sv->tuoi);
	
	printf("Nhap diem TB: ");
	scanf("%f", &sv->diemTB);
	getchar();
	sv->next = NULL;
	return sv;
}

List* taoDS(){
	List* ds = (List*)malloc(sizeof(List));
	ds->first = NULL;
	return ds;
}

/*
1. tao danh sach:
	- them sv vao cuoi
	-tao ds
*/

void addSV(List* ds, SinhVien* sv) {
    if (ds->first == NULL) {
        ds->first = sv;
    } else {
        SinhVien* last = ds->first;
        while (last->next != NULL) { 
            last = last->next;
        }
        last->next = sv;
    }
}


void createDS(List* ds){
	char chon;
	do{
		SinhVien* sv = taoSV();
		addSV(ds, sv);
		printf("Tao them sv (y/n): ");
		scanf("%c", &chon);
		getchar();
	}
	while(chon != 'n' && chon != 'N' );
}

// hien thi danh sach
void hienThi(List* ds){
	printf("\t\tDANH SACH SINH VIEN\n");
	printf("%5s%30s%10s%10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
	int STT = 1;
	SinhVien* last = ds->first;
	while(last != NULL){
		printf("%5d%30s%10d%10.2f\n", STT, last->hoTen, last->tuoi, last->diemTB);
		STT++;
		last = last->next;
	}
}

// Tim sv theo ten
SinhVien* getSV(List* ds, char hoTen[]){
	SinhVien* svCanTim = ds->first;
	while(svCanTim != NULL){
		if(strcmp(hoTen, svCanTim->hoTen) == 0){
			return svCanTim;
		}
		svCanTim = svCanTim->next;
	}
	return NULL;
}

// Chen sv vao truoc 1 sv
void chenSV(List* ds){
	char hoTen[30];
	printf("Nhap ten sv :");
	fflush(stdin);
	gets(hoTen);
	
	SinhVien* sv = getSV(ds, hoTen);
	if(sv){
		if (ds->first == sv) {
	    SinhVien* svCanThem = taoSV();
	    svCanThem->next = ds->first;
	    ds->first = svCanThem;
	} else{
	    SinhVien* svTruoc = ds->first;
	    while (svTruoc->next != sv) {
	        svTruoc = svTruoc->next;
	    }
	    SinhVien* svCanThem = taoSV();
	    svCanThem->next = sv;
	    svTruoc->next = svCanThem;
		}
		hienThi(ds);
	}
	else{
		printf("Khong tim thay sv!\n");
	}
}

/* Xoa 1 sv va in lai danh sach
	-Tim sv 
		*ko tim thay --> return;
		*tim thay
			.sv can xoa dung dau danh sach
				list->first = sv->next
			.vi tri khac
				svDungTruoc->next = sv->next;
*/
void xoaSV(List* ds) {
    char hoTen[30];
    printf("Nhap ten sv: ");
    fflush(stdin);
    gets(hoTen);

    SinhVien* svCanXoa = getSV(ds, hoTen);
    if (svCanXoa == NULL) {
        printf("Khong tim thay sinh vien!\n");
        return;
    }

    if (ds->first == svCanXoa) {
        ds->first = svCanXoa->next;
    } else {

        SinhVien* svTruoc = ds->first;
        while (svTruoc->next != svCanXoa) {
            svTruoc = svTruoc->next;
        }
        svTruoc->next = svCanXoa->next;
    }

    free(svCanXoa);
    printf("Da xoa sinh vien!\n");
    hienThi(ds);
}



int main(){
	List* ds = taoDS();
	int chon;
	do{
		printf("\t\tMENU\n");
		printf("1. Tao danh sach sinh vien\n");
        printf("2. Hien thi danh sach sinh vien\n");
        printf("3. Chen them sinh vien\n");
        printf("4. Xoa mot sinh vien\n");
        printf("5. Ket Thuc\n");
        printf("Lua chon: ");
        scanf("%d", &chon);
        getchar();
        
        switch(chon){
        	case 1:
        		createDS(ds);
        		break;
        	case 2:
        		hienThi(ds);
        		break;
        	case 3:
        		chenSV(ds);
        		break;
        	case 4:
        		xoaSV(ds);
        		break;
        	case 5:
        		printf("Ket Thuc!");
        		break;
        	default:
        		printf("Lua chon khong hop le");
        	
		}
	} while(chon!=5);
	
	return 0;
}
