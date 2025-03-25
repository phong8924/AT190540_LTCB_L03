#include <stdio.h>

void tim_min_max(int *arr, int n, int *min, int *max) {
    *min = *max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
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

    int min, max;
    tim_min_max(p, n, &min, &max);

    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);

    return 0;
}

