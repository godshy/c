#include <stdio.h>
#include <math.h>
int main()
{
    long int result = pow(2, 32) -1;  //注意如果使用int，因为左边有一个符号位，所以表示的最大只能2^31-1
    printf("result is %ld\n", result); //
    return 0;
}