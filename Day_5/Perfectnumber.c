#include <stdio.h>

int main() {
    int i,n,sum=0;
    printf("Enter the number.");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("The number is Perfect number");
    }
    else{
        printf("The number is not a Perfect number‼️");
    }

    return 0;
}
