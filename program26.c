#include <stdio.h>
int main()
{
    int n,i,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
    }
    if(sum>10000)
        printf("Limit Exceeded");
    else
        printf("Approved");
}
