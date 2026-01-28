#include <stdio.h>
int main()
{
    int n,i,x,sum=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
        if(x>3) count++;
    }
    printf("Total Overtime Hours: %d\n",sum);
    printf("Overtime Cost: %d\n",sum*200);
    printf("Heavy Overtime Days: %d",count);
}
