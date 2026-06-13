#include <stdio.h>
void sum(int a,int b);
int main() {
    int n1,n2;
    printf("Enter the value of n1 and n2.");
    scanf("%d%d",&n1,&n2);
    sum(n1,n2);
    return 0;
}
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
