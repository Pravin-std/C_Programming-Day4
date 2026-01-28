#include <stdio.h>
int main()
{
    int cap,n,i,x,count=0;
    scanf("%d",&cap);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        cap-=x;
        if(cap<0) count++;
    }
    printf("Remaining Capacity: %d\n",cap);
    printf("Overflow Days: %d",count);
}
