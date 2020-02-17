#include <stdio.h>

int main ()
{
    int a;
    char b;
    float c; /*带小数点*/
    double d; /*双精度，位数多*/

    a = 100; /**/
    b = 'F';
    c = 3.14;
    d = 3.14159265;
    
    printf("number of a is %d\n", a);   /*这里%d是占位符，代表一个digit*/
    printf("%cuck\n", b); /*%c是char的占位符*/
    printf("pi is %.2f\n", c); /*%f是float的占位符*/
    printf("long dig of pi is : %.5f\n", d);

    return 0;
}
