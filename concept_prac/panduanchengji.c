#include <stdio.h>
int main()
{
    float a;
    printf("请输入成绩:\n");
    scanf("%e", &a);
    if (a <=100 && a >= 85 )
    {
        printf("成绩是A");
    }
    else if (a < 85 && a >= 75)
    {
        printf("成绩是B");
    }
    else if (a < 75 && a >= 65)
    {
        printf("成绩是C");
    }
    else if (a< 65 && a > 60)
    {
        printf("成绩是D");
    }
    else
    {
        printf("成绩是E");
    }
    return 0;
    
    
}