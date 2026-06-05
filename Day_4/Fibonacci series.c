#include <stdio.h>

int main() {
    int n,x=0,y=1,z=0;
    printf("Enter the value of n.");
    scanf("%d",&n);
    while(z<=n)
    {
       printf("%d\n",z);
       x=y;
       y=z;
       z=x+y;
    }

    return 0;
}
