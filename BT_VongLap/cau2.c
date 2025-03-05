#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d khong phai so nguyen to.\n", n);
        return 0;
    }

    int isPrime = 1;
    for(int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai so nguyen to.\n", n);
    }

    return 0;
}

