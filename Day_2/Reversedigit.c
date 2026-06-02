#include <stdio.h>

int main() {
    int i,n,ld,rev=0;
    printf("Enter the number.");
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    printf("%d",rev);

    return 0;
}
