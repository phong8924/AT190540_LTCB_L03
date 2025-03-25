#include <stdio.h>

#define MAX 10 // Kich thuoc toi da cua ma tran

// Ham nhap ma tran
void nhapMaTran(int a[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Ham in ma tran
void inMaTran(int a[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

// Ham tinh tong hai ma tran
void tongMaTran(int a[MAX][MAX], int b[MAX][MAX], int kq[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            kq[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Ham tinh tich hai ma tran
void tichMaTran(int a[MAX][MAX], int b[MAX][MAX], int kq[MAX][MAX], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            kq[i][j] = 0;
            for (int k = 0; k < n; k++) {
                kq[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;
    int a[MAX][MAX], b[MAX][MAX], kq[MAX][MAX];

    printf("Nhap so dong va cot cua ma tran A: ");
    scanf("%d %d", &m, &n);
    nhapMaTran(a, m, n);

    printf("Nhap so dong va cot cua ma tran B: ");
    scanf("%d %d", &n, &p); // so cot cua A phai bang so dong cua B
    nhapMaTran(b, n, p);

    printf("Ma tran A:\n");
    inMaTran(a, m, n);

    printf("Ma tran B:\n");
    inMaTran(b, n, p);

    // Tinh tong ma tran 
    if (m == n && n == p) {
        tongMaTran(a, b, kq, m, n);
        printf("Tong hai ma tran:\n");
        inMaTran(kq, m, n);
    } else {
        printf("Khong the tinh tong do kich thuoc khong hop le!\n");
    }

    // Tinh tich ma tran
    tichMaTran(a, b, kq, m, n, p);
    printf("Tich hai ma tran:\n");
    inMaTran(kq, m, p);

    return 0;
}

