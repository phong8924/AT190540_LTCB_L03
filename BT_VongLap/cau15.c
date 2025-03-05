#include <stdio.h>
#include <math.h>

int main() {
    double A;  // tien goc
    int n;     // So thang
    scanf("%lf %d", &A, &n);

    
    double lai_suat = 0.0045;
    
    double so_tien_cuoi = A * pow((1 + lai_suat), n);

    printf("%.2lf\n", so_tien_cuoi);
    return 0;
}

