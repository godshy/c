#include <stdio.h>
int main()
{
    int a = 1, b =1;
    for (a =1; a <10; a += 1)
    {
        for (b=1; b <= a ; b+=1)
        {
            printf("%d*%d=%-2d  ", a, b, a*b);
        }
        putchar('\n');

    }
    return 0;

}