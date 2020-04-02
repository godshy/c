#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    clock_t start, finish;
    double duration=0;
    start = clock();
    printf("hello world!!");
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration );
    return 0;
}
