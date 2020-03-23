//算算在这个世界上活了多久
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int month, year, day;
    int month1, year1, day1;
    int run[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int no_run[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count_run = 0;
    int days = 0;
    int days_today = 0;
    //int *a;
    

    printf("请输入你的生日(如1900-03-01): ");
    scanf("%d-%d-%d", &year, &month,&day);
    printf("请输入今天日期 (如2016-03-28)：");
    scanf("%d-%d-%d", &year1, &month1,&day1);

    int date[] = {[0] = year, [1] = month, [2] = day};
    int date_today[] = {[0] = year1, [1] = month1, [2] = day1};
    int temp = date_today[0];
    //a = (int *)malloc(temp*sizeof(int));
    for (; temp >= date[0]; temp--)
    {
        if (temp - 2020 >= 0)
        {
            for (int n = 0; (temp - 4*n) >= 2020; n++)
            {
                if (temp - 4*n == 2020)
                {
                    printf("%d是闰年\n", temp);
                    count_run = count_run + 1;             
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            for (int n = 0; (temp + 4*n) <= 2020; n ++) 
            {
                if ( 2020 - n * 4 == temp)
                {
                    printf("%d是闰年\n", temp);
                    count_run = count_run + 1;
                    
                }
                else
                {
                    continue;
                }      
            }
            
        }

    } 
    printf("在%d和%d之间一共有%d个闰年\n", date_today[0], date[0], count_run);  
    //printf("temp= %d", temp);
    for (int n = 0; date_today[0] -  4*n >= date[0]; n++)
    {
        if (date_today[0] - 4*n == date[0])
        {
            goto case1;
        }
        else
        {
            continue;
        }  
        
    }
    
    if ( temp + 1 == date[0])
    {
        printf("temp = %d", temp);
        goto case2;
    }
    else
    {
        if (date_today[0] - 2020 >= 0)
        {
            for (int n = 0; (year - 4*n) >= 2020; n++)
            {
                if (date_today[0] - 4*n == 2020)
                {
                    printf("今年是闰年\n");
                    goto case3;
                }
                else
                {
                    continue;
                }
          
            }
            printf("不是闰年\n");
            goto case4;

            return 0;              

        }
        else
        {
            for (int n = 0; (date_today[0] + 4*n) <= 2020; n ++) 
            {
                if ( 2020 - n * 4 == date_today[0])
                {
                    printf("是闰年\n");
                    goto case3;
                }
                else
                {
                    continue;
                }      
            }
            printf("不是闰年\n");
            goto case4;
        
        }
    
    }
    
    case1:
    for (int k = 0; k < date[1]; k++)
    {
        days = run[k] + days;
    }
    for (int j = 0; j < date_today[1]; j++)
    {
        days_today = run[j] + days_today;
    }
    int total = (date_today[0] - date[0]-count_run)*365 + count_run*366 - days - date[2] + days_today + date_today[2];
    printf("有%d天,case1\n", total-1);
    return 0;

    case2:
    for (int k = 0; k < date[1]; k++)
    {
        days = no_run[k] + days;
    }
    for (int j = 0; j < date_today[1]; j++)
    {
        days_today = run[j] + days_today;
    }
    int total1 = (date_today[0] - date[0]-count_run)*365 + count_run*366 - days - date[2] + days_today + date_today[2];
    printf("有%d天，case2\n", total);
    return 0;

    case3:
    for (int k = 0; k < date[1]; k++)
    {
        days = no_run[k] + days;
    }
    for (int j = 0; j < date_today[1]; j++)
    {
        days_today = run[j] + days_today;
    }
    int total2 = (date_today[0] - date[0]-count_run)*365 + count_run*366 - days - date[2] + days_today + date_today[2];
    printf("有%d天,case3\n", total);
    return 0;

    case4:    
    for (int k = 0; k < date[1]; k++)
    {
        days = no_run[k] + days;
    }
    for (int j = 0; j < date_today[1]; j++)
    {
        days_today = no_run[j] + days_today;
    }
    int total3 = (date_today[0] - date[0]-count_run)*365 + count_run*366 - days - date[2] + days_today + date_today[2];
    printf("有%d天,case4\n", total );
    return 0;
    

    return 0;

}