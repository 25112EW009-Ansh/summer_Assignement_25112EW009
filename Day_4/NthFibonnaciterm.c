#include <stdio.h>

int main() {
    int n,x=0,y=1,z=0;
    printf("Enter the value of n.");
    scanf("%d",&n);
    while(z<=n)
    {
       
       x=y;
       y=z;
       z=x+y;
    }
    printf("%d",z);

    return 0;
}
