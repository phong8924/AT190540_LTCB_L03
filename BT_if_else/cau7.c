#include <stdio.h>

int main(){
	float dtb;
	scanf("%f", &dtb);
	if(dtb <0 || dtb > 10){
		printf("Diem khong hop le. Nhap lai");
	}
	else if(dtb < 5){
		printf("Hoc luc yeu");
	}
	else if(dtb >= 5 && dtb < 7){
		printf("Hoc luc Trung binh");
	}
	else if(dtb >= 7 && dtb < 8){
		printf("Hoc luc Kha");
	}
	else if(dtb >= 8 && dtb < 9){
		printf("Hoc luc Gioi");
	}
	else if(dtb >= 9){
		printf("Hoc luc xuat sac");
	}
	
	return 0;
}
