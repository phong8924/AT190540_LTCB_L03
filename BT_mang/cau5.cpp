#include <stdio.h>

// Ham de dem so lan xuat hien cua phan tu x trong mang arr
int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n; 
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x; 
    printf("Nhap x: ");
    scanf("%d", &x);

    int occurrences = countOccurrences(arr, n, x);
    printf("Phan tu %d xuat hien %d lan trong mang.\n", x, occurrences);

    return 0;
}

