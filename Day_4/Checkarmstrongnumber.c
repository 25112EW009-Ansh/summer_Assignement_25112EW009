#include <stdio.h>

int main() {
    int n,rem,temp,sum=0;
    printf("Enter the value of n.");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The given number is a Armstrong number ");
    }
    else{
        printf("The given number is not armstrong ");
    }

    return 0;
}
