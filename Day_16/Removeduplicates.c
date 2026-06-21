#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size > 1) {
        int j = 0;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] != arr[i + 1]) {
                arr[j++] = arr[i];
            }
        }
        arr[j++] = arr[size - 1];
        size = j;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
