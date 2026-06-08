#include <stdio.h>

int main() {
    int X,n,i,power=1;
    printf("Enter the value of X.");
    scanf("%d",&X);
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        power=power*X;
    }
    printf("%d",power);

    return 0;
}
