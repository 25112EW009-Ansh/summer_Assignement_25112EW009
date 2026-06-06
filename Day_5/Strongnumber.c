#include <stdio.h>

int main() {
    int i,n,rem,fact=1,sum=0.0;
    printf("Enter the number.");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        for(i=1;i<rem;i++)
        {
            fact=fact*i;
            sum=sum+fact;
        }
        n=n/10;
    }
    if(sum==n)
    {
        printf("The number is STRONG NUMBER");
    }
    else
    {
        printf("The number is not STRONG NUMBER");
    }

    return 0;
}
