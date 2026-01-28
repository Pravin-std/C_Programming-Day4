#include <stdio.h>
int main()
{
    int n,i,x,sum=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
        if(x>2) count++;
    }
    printf("Total Data: %d\n",sum);
    printf("High Usage Days: %d",count);
}
