#include <stdio.h>

int main() {
    int n,m,i,j,a[10][10],b[10][10],c[10][10];
    printf("Input the number of rows and coloumns.");
    scanf("%d%d",&n,&m);
    printf("Input elements in first matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input elements in second matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",b[i][j]);
        }
    }
    printf("The a subtraction of both matrix is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",c[i][j]);
        }
    }
return 0;
}

