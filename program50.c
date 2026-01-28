#include <stdio.h>
int main()
{
    int n,i,x,max=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>max) max=x;
        if(x>140) count++;
    }
    printf("Max Heart Rate: %d\n",max);
    printf("Danger Readings: %d",count);
}
