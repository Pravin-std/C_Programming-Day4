#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(;n!=0;n/=10)
    {
        int temp = n;
        temp %=10;
        sum +=temp;
    }
    printf("Sum = %d",sum);
    return 0;
}