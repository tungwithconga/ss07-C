#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int foundEven = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            foundEven = 1;
        }
    }
    if (!foundEven) {
        printf("\nMang khong chua so chan. Cac phan tu con lai: ");
        for (int i = 0; i < 5; i++) {
            if (arr[i] % 2 != 0) {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}

