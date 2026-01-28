#include <stdio.h>
int main()
{
    int cash,n,i,x,count=0;
    scanf("%d",&cash);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        cash-=x;
        if(cash<5000) count++;
    }
    printf("Remaining Cash: %d\n",cash);
    printf("Risk Count: %d",count);
}
