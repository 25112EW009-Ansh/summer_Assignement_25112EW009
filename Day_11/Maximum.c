#include <stdio.h>
void maximum(int a,int b);
int main() {
    int n1,n2;
    printf("Enter the value of n1 and n2.");
    scanf("%d%d",&n1,&n2);
    maximum(n1,n2);
    return 0;
}
void maximum(int a,int b)
{
    if(a>b)
    {
        printf("a is maximum");
    }
    else{
        printf("b is maximum");
    }
}
