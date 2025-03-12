#include <stdio.h>

// Ham thay the cac phan tu am bang 0
void replaceNegativeWithZero(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int n; 
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    replaceNegativeWithZero(arr, n);

    // In mang sau khi thay doi
    printf("Mang sau khi thay the:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

