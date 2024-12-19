#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong co gia tri lon nhat\n");
        return 0;
    }

    int arr[n];

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Tim gia tri lon nhat trong mang
	int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Gia tri lon nhat trong mang là: %d\n", max);

    return 0;
}

