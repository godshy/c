#include <stdio.h>
int main()
{
    int count = 0;
    printf("输入内容");
    while (getchar()!= '\n')
    {
        count = count +1;
    }
    printf("%d\n", count);
    return 0;
    
}