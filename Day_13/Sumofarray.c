include <stdio.h>

int main() {
    int i,a[10],n,avg,sum=0;
    printf("Input array size.");
    scanf("%d",&n);
    printf("Input array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=avg/n;
    }
    printf("%d",sum);
    printf("%d",avg);



    return 0;
}
