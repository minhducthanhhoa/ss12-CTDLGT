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

    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    int hasDuplicates = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1) {
            printf("Phan tu %d xuat hien %d lan.\n", arr[i], count);
            hasDuplicates = 1;
        }
    }
    if (!hasDuplicates) {
        printf("Khong co phan tu lap lai.\n");
    }

    return 0;
}

