#include <stdio.h>

int main() {
    int i,n,ld,sum=0;
    printf("Enter the number.");
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("%d",sum);

    return 0;
}
