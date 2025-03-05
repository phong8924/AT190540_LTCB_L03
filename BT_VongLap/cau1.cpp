#include <stdio.h>

int main() {
    int sum = 0;
    int x;

    printf("Nhap 10 so nguyen:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("Tong = %d\n", sum);
    return 0;
}

