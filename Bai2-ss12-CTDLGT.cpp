#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong co gia tri nho nhat\n");
        return 0;
    }

    int arr[n];

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Tim gia tri nho nhat trong mang
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Gia tri nho nhat trong mang là: %d\n", min);

    return 0;
}

