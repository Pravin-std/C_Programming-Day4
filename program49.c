#include <stdio.h>
int main()
{
    int n,i,x,sum=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
        if(x>40) count++;
    }
    printf("Total Calls: %d\n",sum);
    printf("Overloaded Hours: %d",count);
}
