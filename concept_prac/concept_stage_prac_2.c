//请编写程序，找出斐波那契数列中数值不超过 4 百万的项，并计算这些项中值为偶数的项之和。
//4613732
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    clock_t start, finish;
    double duration=0;
    start = clock();

    long int a = 1;
    long int b = 2;
    long int sum = 0;
    long int count = 0;
    int n = 3;
    while (1)
    {
        printf("fibonacci num is: %ld\n", count);
        count = a + b;
        a = b;
        b = count;
        if (count > 4000000)
        {
            break;
        }
        else if (count % 2 == 0)
        {
            sum = sum + count;
        }
    }
    printf("the sum of all even numbers is: %ld\n", sum + 2);
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration );
    return 0;
}