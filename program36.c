#include <stdio.h>
int main()
{
    int n,i,x,max=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>max) max=x;
        if(x>100) count++;
    }
    printf("Highest Price: %d\n",max);
    printf("High Price Days: %d",count);
}
