#include <stdio.h>

int main() {
    int i,n,S,a[10];
    printf("Input the array size.");
    scanf("%d",&n);
    printf("Input array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input the element to be searched:");
    scanf("%d",&S);
    for(i=0;i<n;i++)
    {
        if(a[i]==S)
        {
            printf("SUCCESSFUL:");
        }
        else
        {
            printf("UNSUCCESSFUL:");
        }
    }

    return 0;
}
