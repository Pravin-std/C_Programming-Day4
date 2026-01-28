#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int hcf = 0,min;

    if(n1>n2)
    {
        min = n1;
    }else
    {
        min = n2;
    }
    for(int i = 1;i<=min;i++)
    {
        if(n1 % i ==0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d",hcf);

}