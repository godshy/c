//练习一下指针怎么让数组输出更快
/*#include <stdio.h>
int main()
{
    int a[5], i;
    printf("请输入五个数。");
    for (i = 0; i < 5; i ++)
    {
        scanf("%d", a + i);
    }
    for (i = 0; i< 5; i++)
    {
        printf("%d",*(a + i));
    }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int b[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //char c[] = {'1月份', '2月份', '3月份', '4月份', '5月份', '6月份', '7月份', '8月份', '9月份', '10月份', '11月份', '12月份', '\0'};
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for ( int i = 0; i< 11; i++)
    {
        printf("%d月份: %d,\n", *(c + i), b[i]);
 
    }
    return 0;
}