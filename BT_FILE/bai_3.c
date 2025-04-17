#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "SO_LIEU.C"


typedef struct {
	char tenHang[30];
	int donGia;
	int soLuong;
	int thanhTien;
} MatHang;

//Ham nhap du lieu moi va ghi de len tep
void nhapSL(){
	//mo file
	FILE *fp = fopen(FILE_NAME, "wb");
	if(fp == NULL){
		printf("Khong mo duoc file\n");
		return;
	}
	//su ly
	int n;
	printf("Nhap so mat hang");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		MatHang mh;
		printf("Nhap thong tin mh %d\n", i+1);
		
		printf("Nhap ten: ");
		getchar();
		fgets(mh.tenHang, sizeof(mh.tenHang), stdin);
		mh.tenHang[strcspn(mh.tenHang, "\n")] = '\0';
		
		printf("Nhap don gia: ");
		scanf("%d", &mh.donGia);
		
		printf("Nhap so luong: ");
		scanf("%d", &mh.soLuong);
		
		mh.thanhTien = mh.donGia * mh.soLuong;
		
		//ghi du lieu
		fwrite(&mh, sizeof(MatHang), 1, fp);
		//(doi tuong, kichthuoc, so luong ban ghi, file can luu)
		
	}
	//dong file
	fclose(fp);
	printf("Du lieu da duoc ghi");
}


//Hàm bo sung du lieu vao cuoi tep
void boSung(){
	FILE *fp = fopen(FILE_NAME, "ab");
	if(fp == NULL){
		printf("ko mo dc file");
		return;
	}
	
	int n;
	printf("So luong mat hang bo sung: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		MatHang mh;
		printf("Nhap thong tin mh so %d\n", i+1);
		
		printf("Nhap ten: ");
		getchar();
		fgets(mh.tenHang, sizeof(mh.tenHang), stdin);
		mh.tenHang[strcspn(mh.tenHang, "\n")] = '\0';
		
		printf("Don gia: ");
        scanf("%d", &mh.donGia);

        printf("So luong: ");
        scanf("%d", &mh.soLuong);

        mh.thanhTien = mh.donGia * mh.soLuong;

		fwrite(&mh, sizeof(MatHang), 1, fp);
	}
	
	fclose(fp);
	printf("da bo sung");
}

//Ham hien thi noi dung
void hienThi(){
	FILE *fp = fopen(FILE_NAME, "rb");
	if(fp == NULL){
		printf("ko the mo tep");
		return;
	}
	
	MatHang mh;
	int STT = 1;
	int tongTien = 0;
	
	printf("\n\t\tSO LIEU BAN HANG\n");
	printf("%5s%30s%10s%10s %15s\n", "STT", "Ten Hang", "Don Gia", "So luong", "Thanh Tien");
	
	while(fread(&mh, sizeof(MatHang), 1, fp) == 1){
		printf("%5d%30s%10d%10d %15d\n", STT++, mh.tenHang, mh.donGia, mh.soLuong, mh.thanhTien);
		tongTien += mh.thanhTien;
	}
	printf("\t\t\t\t\t\t\tTong Tien:  %d\n\n", tongTien);
	
	fclose(fp);
}

int main(){
	int choice;
	
	do
	{
		printf("\t\tMENU\n");
		printf("1. Nhap so lieu ban hang len tep\n");
        printf("2. Ghi bo sung so lieu ban hang vao cuoi tep\n");
        printf("3. Hien thi noi dung tep SO_LIEU.C\n");
        printf("4. Ket thuc\n");
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
        		printf("Ket thuc\n");
        		break;
        	default:
        		printf("Lua chon khong hop le\n");
		}
	} while(choice != 4);
	
	return 0;
}
