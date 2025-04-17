#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FILE_NAME "DSACH.C"

typedef struct {
	char hoTen[30];
	int tuoi;
	float diemTB;
} SinhVien;


//Ham nhap so lieu 
void nhapSL(){
	// mo file
	FILE *fp = fopen(FILE_NAME, "wb");
	if(fp == NULL){
		printf("Khong mo duoc file");
		return;
	}
	
	int n;
	printf("Nhap so luong sv: ");
	scanf("%d", &n);
	
	SinhVien sv;
	for(int i=0; i<n; i++){
		printf("Nhap tt sv so %d\n", i+1);
		printf("Nhap ho ten: ");
		getchar();
		fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
		sv.hoTen[strcspn(sv.hoTen, "\n")] = '\0';
		
		printf("Nhap tuoi: ");
		scanf("%d", &sv.tuoi);
		printf("Nhap diem TB: ");
		scanf("%f", &sv.diemTB);
		
		fwrite(&sv, sizeof(SinhVien), 1, fp);
	}
	
	fclose(fp);
	printf("Da ghi vao file");
}

void boSung(){
	// mo file
	FILE *fp = fopen(FILE_NAME, "ab");
	if(fp == NULL){
		printf("Khong the mo file");
		return;
	}
	
	int n;
	printf("Nhap so luong sv: ");
	scanf("%d", &n);
	
	SinhVien sv;
	for(int i=0; i<n; i++){
		printf("Nhap tt sv so %d\n", i+1);
		printf("Nhap ho ten: ");
		getchar();
		fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
		sv.hoTen[strcspn(sv.hoTen, "\n")] = '\0';
		
		printf("Nhap tuoi: ");
		scanf("%d", &sv.tuoi);
		printf("Nhap diem TB: ");
		scanf("%f", &sv.diemTB);
		
		fwrite(&sv, sizeof(SinhVien), 1, fp);
	}
	
	fclose(fp);
	printf("Da bo sung vao file");
}

//Ham hien thi
void hienThi(){
	FILE *fp = fopen(FILE_NAME, "rb");
	if(fp == NULL){
		printf("Ko mo duoc file");
		return;
	}
	
	SinhVien sv;
	int STT =1;
	printf("\n\t\tDANH SACH SINH VIEN\n");
	printf("%5s%20s%10s%10s\n", "STT", "Ho Ten", "Tuoi", "Diem TB");
	
	while(fread(&sv, sizeof(SinhVien), 1, fp) == 1){
		printf("%5d%20s%10d%10.2f\n", STT++, sv.hoTen, sv.tuoi, sv.diemTB);
	}
	
	fclose(fp);
}

int main(){
	int choice;
	do
		{
			printf("\n\t\tMENU\n");
			printf("1. Nhap thong tin sv len tep\n");
	        printf("2. Ghi bo sung thong tin sv vao cuoi tep\n");
	        printf("3. Hien thi noi dung tep DSACH.C\n");
	        printf("4. Sua thong tin sinh vien\n");
	        printf("5. Ket thuc\n");
	        scanf("%d", &choice);
	        
	        switch(choice){
	        	case 1:
	        		nhapSL();
	        		break;
	        	case 2:
	        		boSung();
	        		break;
	        	case 3:
	        		hienThi();
	        		break;
	        	case 4:
	        		printf("Sua thong tin");
	        		break;
	        	case 5:
	        		printf("Ket thuc\n");
	        		break;
	        	default:
	        		printf("Lua chon khong hop le\n");
			}
		} while(choice != 5);
	
	
	return 0;
}
