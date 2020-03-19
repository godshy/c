// 输入大写字母变成小写，小写变大写 ，其它不处理
#include <stdio.h>
int main()
{   
    char a;
    int b;
    while (1)
    {
        printf("请输入一个字母：");
        scanf("%s", &a);
        if (65 <= a && a <= 90)
        {
            int c = a;
            b =  c + 32;
            printf("out:%c\n", (char)b);
        } 
        else if (97 <=a && a <= 122)
        {   
            int c = a;
            b = a - 32;
            printf("out:%c\n", (char)b);
        }
        
        else
        break;  
    }

    return 0;
}