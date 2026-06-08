#include <stdio.h>

int main() {
    int n,rem,sum=0,weight=1;
    printf("Enter the binary number.");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*weight;
        n=n/10;
        weight=weight*2;
    }
    printf("%d",sum);

    return 0;
}
