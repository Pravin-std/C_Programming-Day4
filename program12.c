#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int res=1;
    for(int i = 1;i<=n2;i++)
    {
        res = n1 * res;
    }
printf("power = %d",res);
    return 0;
}