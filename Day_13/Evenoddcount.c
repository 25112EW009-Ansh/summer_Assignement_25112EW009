#include <stdio.h>

int main() {
    int i,a[10],n,evencount=0,oddcount=0;
    printf("Input array size.");
    scanf("%d",&n);
    printf("Input array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evencount=evencount+1;
            
        }
        
        else{
            
            oddcount=oddcount+1;
            
        
        }
    }
    printf("%d",evencount);
    printf("%d",oddcount);
    



    return 0;
}
