#include <stdio.h>

void hoan_doi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &x, &y);

    printf("Truoc khi hoan doi: x = %d, y = %d\n", x, y);
    hoan_doi(&x, &y);
    printf("Sau khi hoan doi: x = %d, y = %d\n", x, y);

    return 0;
}

