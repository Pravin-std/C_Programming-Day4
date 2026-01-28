#include <stdio.h>
int main()
{
    int salary,absent,i;
    scanf("%d",&salary);
    scanf("%d",&absent);
    for(i=0;i<absent;i++)
        salary-=100;
    printf("Final Salary: ₹%d",salary);
}
