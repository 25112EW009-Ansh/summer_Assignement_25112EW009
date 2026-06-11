#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        char ch = (char)(i + 64);
        for(j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
