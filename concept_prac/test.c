/*#include <stdio.h>
int main()
{
    int a = 6;
    int b = 3;
    int c;
    c = a%b;
    printf("%d", c);
} */

#include <stdio.h>

int main()
{
        int a = 110;
        int *b = &a;

        *b = *b - 10;

        printf("a = %d\n", a);

        return 0;
}