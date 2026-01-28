#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int res = 0,temp;
    for(;n!=0;n/=10)
    {
        temp = n;
        temp %=10;
        res = res * 10 + temp;
    }
    printf("Reverse %d",res);
}

