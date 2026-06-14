#include <stdio.h>
void Perfect(int n);
int main() {
    int a;
    printf("Input the number.");
    scanf("%d",&a);
    Perfect(a);
    return 0;
}
void Perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            break;
        }
    }
    if(sum==n){
        printf("The number is a Perfect number");
        
    }
    else{
        printf("The number is not a perfect number");
    }
}
