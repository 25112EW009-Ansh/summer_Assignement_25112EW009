#include <stdio.h>
void prime(int n);
int main() {
    int a;
    printf("Enter the number.");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int n)
{
    int isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("The number is prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
}
