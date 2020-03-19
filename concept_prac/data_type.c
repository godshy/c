#include <stdio.h>

int main()
{
    printf("整型数输出 : %d\n", 1 + (int)2.0); //强制转换，注意精度舍弃的问题
    printf("浮点型数输出%.2f\n", 1 + 2.0);
}