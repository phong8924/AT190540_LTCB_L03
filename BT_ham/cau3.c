#include<stdio.h>

int fibonacci(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<0){
		printf("Nhap so duong; ");
	} else{
		printf("Fibonacci(%d) = %d", n, fibonacci(n));
	}
	
	return 0;
}
