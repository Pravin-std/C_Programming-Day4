#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1; 
    int c;
    scanf("%d",&n);
    if(n>=1)
    {
        printf("%d",a);
    if(n>=2)
        printf("%d",b);
        for(int i = 3; i <=n;i++) {
        c = b + a; 
        printf("%d\n", c);
        a = b;           
        b = c;
    }

    return 0;
    }
}