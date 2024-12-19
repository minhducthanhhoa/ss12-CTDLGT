#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Mang khong hop le\n");
        return 0;
    }

    int arr[n];

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int hasSymmetry = 0; 
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n - 1 - i]);
            hasSymmetry = 1;
        }
    }
    if (!hasSymmetry) {
        printf("Khong co phan tu doi xung trong mang.\n");
    }

    return 0;
}

