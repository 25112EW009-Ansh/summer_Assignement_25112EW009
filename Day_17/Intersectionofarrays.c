#include <stdio.h>

void intersect(int arr1[], int n1, int arr2[], int n2) {
    for (int i = 0; i < n1; i++) {
        int is_duplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                is_duplicate = 1;
                break;
            }
        }
        if (is_duplicate) continue;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {4, 9, 5, 4};
    int arr2[] = {9, 4, 9, 8, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersect(arr1, n1, arr2, n2);

    return 0;
}
