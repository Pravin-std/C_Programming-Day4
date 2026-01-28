#include <stdio.h>
int main()
{
    int data,n,i,x,count=0;
    scanf("%d",&data);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(data-x>=0)
        {
            data-=x;
            count++;
        }
    }
    printf("Remaining Data: %d\n",data);
    printf("Successful Days: %d",count);
}
