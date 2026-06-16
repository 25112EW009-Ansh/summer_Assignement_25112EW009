// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,a[10],n;
    printf("Input array size.");
    scanf("%d",&n);
    printf("Input array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }


    return 0;
}
