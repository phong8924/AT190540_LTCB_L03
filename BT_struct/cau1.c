#include<stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
	char tenMH[30];
	int donGia, soLuong, thanhTien;
	
}HangHoa;

void nhap_danh_sach (HangHoa ds[], int *n)
{
	printf("Nhap so luong mat hang: ");
    scanf("%d", n);
    
    for(int i=0; i< *n; i++){
    	printf("Nhap thong tin hang hoa thu %d: \n", i+1);
    	printf("Ten hang: ");
    	fflush(stdin);
    	gets(ds[i].tenMH);
    	printf("Don gia: ");
    	scanf("%d", &ds[i].donGia);
    	printf("so luong: ");
    	scanf("%d", &ds[i].soLuong);
    	ds[i].thanhTien = ds[i].donGia * ds[i].soLuong;
	}
}

void sap_xep_theo_ten(HangHoa ds[], int n)
{
	for(int i=0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(strcmp(ds[i].tenMH, ds[j].tenMH)){
				HangHoa temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

void in_ds (HangHoa ds[], int n)
{
	int tongTien =0;
	printf("\n%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
	for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].tenMH, ds[i].donGia, ds[i].soLuong, ds[i].thanhTien);
        tongTien += ds[i].thanhTien;
    }
    printf("Tong tien: %d\n", tongTien);
    
}

int main(){
	HangHoa ds[MAX];
	int n;
	// Nhap danh sach
    nhap_danh_sach(ds, &n);
    
    // Sap xep theo ten hang
    sap_xep_theo_ten(ds, n);
    
    // In danh sach sau khi sap xep
    in_ds(ds, n);

    return 0;
	
}
