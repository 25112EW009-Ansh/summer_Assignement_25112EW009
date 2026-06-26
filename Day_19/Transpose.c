#include <stdio.h>

int main() {
    int n,m,i,j,a[10][10],b[10][10];
    printf("Input the number of rows and Coloumns .");
    scanf("%d%d",&n,&m);
    printf("Input array elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",b[j][i]);
        }
    }

    return 0;
}
