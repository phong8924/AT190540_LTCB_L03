#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a+b = %d\n", a+b);
	printf("a-b = %d\n", a-b);
	printf("a*b = %d\n", a*b);
	printf("a/b = %d\n", a/b);
	
	//ket qua cua phep chia bi sai do a va b kieu int, can ep kieu float..
	printf("a/b = %f\n", (float)a / b);
}
