#include <stdio.h>

int main() {
    int i,startr,endr,temp,rem,sum=0.0;
    printf("Enter the starting range:.");
    scanf("%d",&startr);
    printf("Enter the ending range:.");
    scanf("%d",&endr);
    for(i=startr;i<=endr;i++)
    {
        temp=i;
        while(temp>0){
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==i){
            printf("%d",i);
            break;
        }
    }

    return 0;
