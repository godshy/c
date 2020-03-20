#include <stdio.h>
int main()
{
    char a;
    printf("请输入评级：\n");
    scanf("%c", &a);
    switch (a)
    {
    case 'A': 
        printf("成绩范围是%d~%d", 85, 100);  //不加break就会把后面的case 全部执行了！
        break;
    case 'B':
        printf("成绩范围是%d~%d", 85, 75);
        break;
    case 'C':
        printf("成绩范围是%d~%d", 65, 75);
        break;
    case 'D':
        printf("成绩范围是%d~%d", 60, 65);
        break;
    case 'E':
        printf("成绩范围是%d~%d", 0, 60);
        break;        
    default:
        printf("输入错误\n");
        break;
    }

    
    return 0;
}