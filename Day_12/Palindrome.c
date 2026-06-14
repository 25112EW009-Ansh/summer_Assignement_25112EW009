#include <stdio.h>
void palidrome(int x,int y);
int main() {
    int n1,n2;
    printf("Enter the base and exponential.");
    scanf("%d%d",&n1,&n2);
     palidrome(n1,n2);
    
     return 0;
}
void palidrome(int x,int y)
{
    int pow=1;
    for(int i=0;i<y;i++)
    {
        pow=pow*x;
    }
    printf("%d",pow);
}


