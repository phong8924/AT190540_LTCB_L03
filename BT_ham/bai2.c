#include<stdio.h>

int tinhGiaiThua(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return n * tinhGiaiThua(n - 1);
}

int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if(n<0){
		printf("Khong tinh giai thua cua so am");
	}
	else{
		printf("%d! = %d", n, tinhGiaiThua(n));
	}
}
