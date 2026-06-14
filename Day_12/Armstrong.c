#include <stdio.h>
void Armstrong(int n);
int main() {
    int a;
    printf("Enter the number.");
    scanf("%d",&a);
    Armstrong(a);
    

    return 0;
}
void Armstrong(int n)
{
    int rev,sum=0;
    while(n>0)
    {
        rev=n%10;
        sum=sum+rev*rev*rev;
        n=n/10;
    }
    if(sum==n)
    {
        printf("The number is a Armstrong number");
    }
    else{
        printf("The number is not a Armstrong number");
    }
    
}
