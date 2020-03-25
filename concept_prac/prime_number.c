//可以在for语句里直接int, c99标准
#include<stdio.h>
int main()
{
    long int a;
    int count_a = 0;
    printf("请输入一个数:\n");
    scanf("%ld", &a);
    for(long int count = 2 ; count <a; count+=1)
    {
        if (a % count == 0)
        {
            printf("可以被%ld整除\n", count);  //这样和下面的break可以加快循环退出的速度，即发现非素数就break出去
            count_a +=1;
            break;     
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