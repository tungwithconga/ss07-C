#include <stdio.h>

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("So lon nhat trong mang là: %d\n", max);
    printf("So nho nhat trong mang là: %d\n", min);

    return 0;
}

