#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 3, 2, 2, 5, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Element %d occurs %d times\n", target, count);
    return 0;
}
