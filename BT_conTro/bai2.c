#include <stdio.h>

int main() {
    int arr[10];
    int *p = arr;

    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", p + i);
    }

    printf("Mang vua nhap: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

