#include<stdio.h>

int tinhMu(int x, int y){
	int kqua=1;
	for(int i=0; i<y; i++){
		kqua*= x;
	}
	return kqua;
}

int main(){
	int x,y;
	printf("Nhap x, y: ");
	scanf("%d %d", &x, &y);
	int kqua = tinhMu(x, y);
	printf("x^y = %d", kqua);
	return 0;
}
