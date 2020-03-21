//找出最大的有由两个三位数乘积构成的回文数
//判断倒置是不是它自己
//906609
//答案上求倒叙
/*              target = num;
                invert = 0;
                while (target)
                {
                        invert = invert * 10 + target % 10;
                        target = target / 10;
                }
*/
#include <stdio.h>
int main ()
{
    long int x, y;
    long int a, b;
    long int count = 0;
    long int after_count =0;
    for ( x = 100; x < 1000; x++)
    {
        for ( y = 100; y <= x; y++)
        {
            a = x * y;
            long int temp = a;
            //printf("a = %ld\n", a);
            while ( a > 0)
            {
                b = a % 10;
                a = a / 10;
                count = (count + b) *10;
            }
            //printf("count = %ld\n", count / 10);
            //printf("%ld - %ld = %ld\n", count/10, temp, count/10 - temp);
            //getchar();
            if ((count/10) - temp == 0)
            {
                printf("回文数是%ld, 此时x = %ld, y = %ld.\n", temp, x, y);
            }
            count = 0;
            temp = 0;
            
            
        }
        
    }
    return 0;
}