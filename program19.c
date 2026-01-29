#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
        printf("*");
    printf("\n");

    for (i = 1; i <= 4; i++)
    {
        printf("*");
        for (j = 1; j <= 3; j++)
            printf(" ");
        printf("*\n");
    }

    for (i = 1; i <= 2; i++)
        printf("*\n");

    for (i = 1; i <= 4; i++)
    {
        printf("*");
        for (j = 1; j <= 3; j++)
            printf(" ");
        printf("*\n");
    }

    for (i = 1; i <= 5; i++)
        printf("*");

    return 0;
}
