#include<stdio.h>

int main() {
	int n;
	printf("Nhap so ptu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap cac ptu cua mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int min = arr[0], max= arr[0];
	int vtMin=0, vtMax=0;
	for(int i=0; i<n; i++){
		if(min > arr[i]){
			min = arr[i];
			vtMin = i+1;
		}
		if(max < arr[i]){
			max = arr[i];
			vtMax = i+1;
		}
	}
	printf("Ptu lon nhat: %d, la ptu thu %d\n", max, vtMax);
	printf("Ptu nho nhat: %d, la ptu thu %d", min, vtMin);
	
	return 0;
}
