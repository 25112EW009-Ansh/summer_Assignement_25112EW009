#include <stdio.h>
int reverse(int num, int reversed);
int reverse(int num);

int main() {
    int num = 12345;
    int result = reverse(num);
    
    printf("Orig num: %d\n", num);
    printf("Reversed num: %d\", result);
    
    return 0;
}
int reverse(int num) {
    return reverse(num, 0);
}
int reverse(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    return(num / 10, reversed * 10 + (num % 10));
}
