#include <stdio.h>
void factorial(int n);

int main() {
    int a;
    printf("Enter the number.");
    scanf("d",&a);
    factorial(a);
    return 0;
}
void factorial(int n)
{
    int fact=1;
    for(int i=1;i<n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
