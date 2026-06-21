#include <stdio.h>

int findMissingElement(int arr[], int size, int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    
    int missing = findMissingElement(arr, size, n);
    printf("The missing element is: %d\n", missing);
    
    return 0;
}
