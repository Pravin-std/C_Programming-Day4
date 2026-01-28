#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int res = n;
    int sum = 0;

    for(;n!=0;n/=10)
    {
        int fact=1;
        int temp = n;
        temp = n%10;
       for(int j = 1;j<=temp;j++)
        {
            fact *= j;
        }
        sum += fact;
    }
    if(res==sum)
    {
        printf("Yes");
    }else
    {
        printf("No");
    }

    return 0;
}