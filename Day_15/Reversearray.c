#include <stdio.h>

int main() {
    int i,n,a[10];
    printf("Input array size.");
    scanf("%d",&n);
    printf("Input array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reversed Array:");
    for(i=n;i>=0;i--)
    {
        printf("%d",a[i]);
    }

    return 0;
}
