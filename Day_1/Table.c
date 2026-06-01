#include <stdio.h>

int main() {
    int i,n,mul=1;
    printf("Enter the value of n.");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mul=n*i;
        printf("%d\n",mul);
    }
    

    return 0;
}
