#include<stdio.h>

int main()
{
	int i, n;
	printf("So luong ptu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0; i<n; i++){
		printf("Nhap phan tu thu %d :" , i+1);
		scanf("%d", &arr[i]);
	}
	
	int countD =0, countA =0, sum=0, sumD=0, sumA=0;
	for(i=0; i<n;i++){
		if(arr[i] < 0){
			sumA += arr[i];
			countA++;
		}
		else if (arr[i] > 0){
			sumD += arr[i];
			countD++;
		}
		sum += arr[i];
	}
	printf("Tong cac ptu cua mang: %d\n", sum);
	printf("Tong cac ptu am cua mang: %d\n", sumA);
	printf("Tong cac ptu duong cua mang: %d\n", sumD);
	float TBC = sum/n;
	printf("Trung binh cong cac ptu cua mang: %.2f\n", TBC);
}
