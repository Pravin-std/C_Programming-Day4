#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int i;
    int isPrime = 1;
    for(i=2;i<num;i++)
    {
        if(num % i !=0)   
        {
            continue;
        }else
        {
            isPrime = 0;
            printf("Not Prime");
            break;
        }

    }
    if(isPrime==1)
        {
            printf("Prime");
        }
}