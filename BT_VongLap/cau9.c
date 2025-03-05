#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double s = 1.0;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
        s += 1.0 / fact;
    }
    printf("%lf", s);
    return 0;
}

