#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %lld\n", n, factorial);
    return 0;
}

