#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arm = n;
    int res = 0;
    for(;n!=0;n/=10)
    {
        int temp = n;
        temp = n % 10;
        res = res + temp * temp * temp;
    }
    if(arm == res)
    {
        printf("Yes");
    }else
    {
        printf("No");
    }
    return 0;
}