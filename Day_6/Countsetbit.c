#include<stdio.h>
int countSetBits(unsigned int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    unsigned int num = 29; 
    printf("Number of set bits in %u is: %d\n", num, countSetBits(num));
    return 0;
}

