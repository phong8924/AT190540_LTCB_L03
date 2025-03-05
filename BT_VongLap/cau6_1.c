#include<stdio.h>

void hoan_doi(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = *a;
}

int UCLN(int a, int b){
	
	while(b != 0){
		int r = a % b;
	    a = b;
	    b = r;
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int ucln = UCLN(a, b);
	printf("UCLN : %d\n", ucln);
	if(a > b){
		hoan_doi(&a, &b);
	}
	printf("BCNN : %d", ucln * a);
}
