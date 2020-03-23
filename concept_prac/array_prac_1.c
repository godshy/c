//计算该年每个月的天数
#include <stdio.h>
int main()
{
    int a[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //unsigned char c[] = {'1月份', '2月份', '3月份', '4月份', '5月份', '6月份', '7月份', '8月份', '9月份', '10月份', '11月份', '12月份'};
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int year;
    int i;

    printf("请输入一个年份：");
    scanf("%d", &year);
    //printf("%d", (*p) % 2020);
    if (year - 2020 >= 0)
    {
        for (int n = 0; (year - 4*n) >= 2020; n++)
        {
            if (year - 4*n == 2020)
            {
                printf("是闰年\n");
                goto print1;
            }
            else
            {
                continue;
            }
          
        }
        printf("不是闰年\n");
        for (int i =0; i< 11; i++)
        {
            printf("%4d月份: %d\n", c[i], b[i]);
        }
        return 0;              

    }
    else
    {
        for (int n = 0; (year + 4*n) <= 2020; n ++) 
        {
            if ( 2020 - n * 4 == year)
            {
                printf("是闰年\n");
                goto print2;
            }
            else
            {
                continue;
            }      
        }
        printf("不是闰年\n");
        for (int i =0; i<11 ; i++)
        {
            printf("%4d月份: %d天\n", c[i], b[i]);
        }
        return 0;   
        
    }
    

print1:
    for ( i = 0; i < 12 ; i++)
    {
        printf("%4d月份:  %d天\n", *(c+i), a[i]);

    }
    return 0;
print2:
    for ( i = 0; i < 12 ; i++)
    {
        printf("%4d月份:  %d天\n", *(c+i), a[i]);

    }
    return 0;


}