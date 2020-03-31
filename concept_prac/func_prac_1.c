#include <stdio.h>

int func(int a)
{
    if ( a == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
 
}

int main()
{
    int a =5;
    int b = func(a);
    printf("b is %d", b);
    int c = 0;
    int d = func(c);
    printf("d is %d", d);
}