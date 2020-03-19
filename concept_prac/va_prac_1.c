/*非常简单的变量练习*/
#include <stdio.h>

int main()

{
    int a;  
    int b;
    b = 3;
    a = b;
    b = b * 2;
    printf("a = %d\nb = %d\n" ,a,b);
    printf("the size of b is %ld", sizeof b);
    return 0;
}