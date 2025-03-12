#include <stdio.h>

// Ham ghep hai mang da sap xep thanh mang moi cung sap xep tang dan
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Tron 2 mang vao mang moi
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Them cac phan tu con lai cua arr1 (neu co)
    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    // Them cac phan tu con lai cua arr2 (neu co)
    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;

    // Nhap mang 1
    printf("Nhap so luong phan tu cua mang 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Nhap cac phan tu cua mang 1 :\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Nhap mang 2
    printf("Nhap so luong phan tu cua mang 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Nhap cac phan tu cua mang 2 :\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Mang ket qua
    int mergedArr[n1 + n2];

    // Goi ham ghep mang
    mergeSortedArrays(arr1, n1, arr2, n2, mergedArr);

    // In mang da ghep
    printf("Mang sau khi ghep:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}

