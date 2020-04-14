#include<stdio.h>
int main()
{
    int i,j,k;
    int sum = 0;
    int N = 150;
    int count_1, count_2, count_3;
    count_1 = 0;
    count_2 = 0;
    count_3 = 0;
    for (i = 1; i < N; i++)
    {
        for (j = 1; j < i*i; j++)
        {
            if (j%i == 0)
            {
                for ( k = 0;k < j; k++)
                {
                    sum++;
                    count_3 ++;
                }
            }
            count_2 ++;
            
        }
        count_1++;
    }
    printf("%d\n%d\n%d\n%d\n", sum, count_1, count_2, count_3);
}