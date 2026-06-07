#include <stdio.h>

int main() {
    int i,n,temp;
    printf("Enter the number.");
    scanf("%d",&n);
    temp=n;
    i=2;
    while(temp>1)
    {
        if(temp%i==0)
        {
            printf("%d\n",i);
            temp=temp/i;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
