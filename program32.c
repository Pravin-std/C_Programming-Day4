#include <stdio.h>
int main()
{
    int n,i,x,sum=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
        if(x>100) count++;
    }
    printf("Total Loss: %d\n",sum);
    printf("High Loss Days: %d",count);
}
