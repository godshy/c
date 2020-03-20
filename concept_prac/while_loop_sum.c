#include <stdio.h>
int main()
{
    int i = 1;
    int sum;
    while (i <= 100)
    {
        sum = sum + i;
        i += 1; //i = i + 1
    }
    printf("%d\n", sum);

}