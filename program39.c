#include <stdio.h>
int main()
{
    int n,i,x,min=1000,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<min) min=x;
        if(x<210) count++;
    }
    printf("Minimum Voltage: %d\n",min);
    printf("Low Voltage Events: %d",count);
}
