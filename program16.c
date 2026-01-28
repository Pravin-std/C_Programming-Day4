#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int sum = 0;
    for(i=1;i<n;i++)
    {
        if(n % i == 0)
        {
            sum +=i;
        }
    }
    if(n==sum){
    printf("Yes");
    }else
    {
        printf("No");
    }
}