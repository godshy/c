#include<stdio.h>
int main()
{
    long int a;
    int count = 1;
    int count_a = 0;
    printf("请输入一个数:\n");
    scanf("%ld", &a);
    for(count = 2 ; count <a; count+=1)
    {
        if (a%count == 0)
        {
            printf("可以被%d整除\n", count);
            count_a +=1;     
        }
        else
        {
            continue;
        }
        
    }
    if (count_a != 0)
    {
        printf("不是素数\n");
    }
    else
    {
        printf("素数(prime)\n");
    }

return 0;
}