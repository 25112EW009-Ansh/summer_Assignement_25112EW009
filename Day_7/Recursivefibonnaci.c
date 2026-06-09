#include <stdio.h>
unsigned long long fibonacci(int n);

int main() {
    int t = 6;

    if (t<0) {
        printf("Fibonacci is not defined ");
    } else {
        printf("The Fibonacci number at position %d is %llu\n", t, fibonacci(t));
    }

    return 0;
}
unsigned long long fibonacci(int n) {
     if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
