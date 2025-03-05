#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double S = 0.0;
    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;
    }
    printf("%.2lf", S);
    return 0;
}

