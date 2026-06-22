#include <stdio.h>

int main() {
    int i,n,m,a[i],b[i];
    printf("Input aaray size.");
    scanf("%d%d",&n,&m);
    printf("Input first array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input second aaray element:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        a[n+i]==b[i];
    }
    printf("successful merged");

    return 0;
}
