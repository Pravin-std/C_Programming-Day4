#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    
    for(int i = 1;i<=10;i++)
    {
        if(n==1){
        printf("%d ",i*1);
        }else if(n==2){
            printf("%d ",i*2);
        }else if(n==3)
        {
            printf("%d ",i*3);
        }else if(n==4)
        {
            printf("%d ",i*4);
        }else if(n==5)
        {
            printf("%d ",i*5);
        }else if(n==6)
        {
            printf("%d ",i*6);
        }else if(n==7)
        {
            printf("%d ",i*7);
        }else if(n==8)
        {
            printf("%d ",i*8);
        }else if(n==9)
        {
            printf("%d ",i*9);
        }else if(n==10)
        {
            printf("%d ",i*10);
        }
    }
    return 0;
}