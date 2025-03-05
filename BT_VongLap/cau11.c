#include <stdio.h>

// Ham chuyen doi so sang he co so bat ky (2, 8, 16)
void chuyenHe(int so, int he) {
    if (so == 0) {
        return;
    }
    int du = so % he;
    chuyenHe(so / he, he);
    
    if (du < 10) {
        printf("%d", du);
    } else {
        printf("%c", du - 10 + 'A');
    }
}

int main() {
    int so;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &so);
    
    if (so <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }
    
    printf("So o he nhi phan (2): ");
    chuyenHe(so, 2);
    printf("\n");
    
    printf("So o he bat phan (8): ");
    chuyenHe(so, 8);
    printf("\n");
    
    printf("So o he thap luc phan (16): ");
    chuyenHe(so, 16);
    printf("\n");
    
    return 0;
}
