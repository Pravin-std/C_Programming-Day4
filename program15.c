#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count=0;
    int i,j;

    for(i=2;i<=n;i++)
    {
        int isPrime = 1;
        for(j=2;j*j<=i;j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
    
}