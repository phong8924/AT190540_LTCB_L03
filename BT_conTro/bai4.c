#include <stdio.h>

void sap_xep(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    sap_xep(p, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

