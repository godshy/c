//编写一个程序，求解 600851475143 的最大质数因子是多少
//6857
#include <stdio.h>
int main ()
{
    long int a;
    printf("请输入一个数:");
    scanf("%ld", &a);
    long int prime = 2;
    int count = 0;
    while(a > prime)
    {
        if (prime == 2)
        {
            if ( a % prime == 0 )
            {
                printf("找到一个可以被整除的素数是:2\n");
                a = a / 2;
                prime++;
                continue;
            }
            else
            {
                prime++;
                continue;
            }        
        }
        else
        {
            for (int prime_det = 2; prime_det < prime; prime_det ++)//先判断是不是素数
            {
                if (prime % prime_det == 0)
                {
                    count ++;
                    prime_det = prime_det + 1;
                }
                else
                {
                    continue;
                }  
            }
            if (count == 0)
                {
                    if ( a % prime != 0)
                    {
                        prime++;
                        continue;
                    }
                    else
                    {
                        printf("找到一个被整除的素数是%ld\n", prime);
                        a = a / prime;
                        prime = 2;                       
                    }         
                }
            else
            {
                prime++;
                count = 0;
            }
            
        }     
    }
    printf("最后一个素数是 %ld\n", a);
    return 0;
}