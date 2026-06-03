#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the he number.");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("THE NUMBER Is Not PRIME");
            break;
        }
    }
    if(n==i)
    {
        printf("ENTERED NUMBER IS PRIME NUMBER");
    }

    return 0;
}
