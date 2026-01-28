#include <stdio.h>
int main()
{
    int battery,n,i,x;
    scanf("%d",&battery);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        battery-=x;
    }
    printf("Remaining Battery: %d%%",battery);
}
