# include <stdio.h>
int main()
{
    int i, sum = 0, n = 100;
    for(i =1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is %d\n", sum);
    return 0;
}
