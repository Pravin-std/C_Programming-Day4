#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int count;

    for(;num!=0;num/=10)
    {
        int temp = num;
        temp = num % 10;
        if(temp % 2==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}