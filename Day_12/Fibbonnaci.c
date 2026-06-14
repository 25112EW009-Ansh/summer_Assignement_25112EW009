#include <stdio.h>
void fibbonnaci(int n);
int main() {
    int a;
    printf("Enter the value of n.");
    scanf("%d",&a);
    fibbonnaci(a);
    

    return 0;
}
void fibbonnaci(int n)
{
    int x=0,y=1,z=0;
    while(z<=n)
    {
        printf("%d",z);
        x=y;
        y=z;
        z=x+y;
    }
}
