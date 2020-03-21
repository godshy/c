//请编写程序，计算出 1000 以内（不包含 1000）的自然数中，属于 3 或 5 的倍数的数字之和。
//answer is 233168
#include <stdio.h>
int main()
{
    int count = 1;
    long int sum = 0;
    for (; count < 1000; count += 1)
    {
        if (count % 3 == 0 || count % 5 == 0)
        {
            printf("the number is: %-d\n", count);
            sum = sum + count;
            continue;
        }
        else
        {
            continue;
        }
        
    }
    printf("the sum is: %ld\n", sum);
    return 0;
}
