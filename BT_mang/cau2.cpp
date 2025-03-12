#include<stdio.h>

int main()
{
	int i, arr[10];
	for(i=0; i<10; i++){
		printf("Nhap phan tu thu %d :" , i+1);
		scanf("%d", &arr[i]);
	}
	printf("Cac ptu cua mang theo chieu nguoc: ");
	for(i=9; i>=0; i--){
		printf("%d ", arr[i]);
	}
	
}
