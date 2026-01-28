#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int rev = n;
    int i;
    int temp,res=0;
    for(;n!=0;n/=10)
    {
        temp = n;
        temp = n % 10;
        res = res * 10 + temp;
    }
    if(rev==res)
    {
        printf("Palindrome");
    }else
    {
        printf("Not Palindrome");
    }
    return 0;
}