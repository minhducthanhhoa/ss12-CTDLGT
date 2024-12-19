#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, right, target);
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Mang khong hop le\n");
        return 0;
    }

    int arr[n];

    printf("Nhap cac phan tu cua mang (theo thu tu tang dan): \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Phan tu %d nam o vi tri: %d\n", target, result + 1);
    } else {
        printf("Khong tim thay phan tu trong mang.\n");
    }

    return 0;
}

