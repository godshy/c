#include<stdio.h>
int main ()
{
    int a, b;
    printf("请输入a: ");
    scanf("%d", &a);
    printf("请输入b: ");
    scanf("%d", &b);
    if (a != b)
        if (a > b)
        {
            printf("a > b");
        }
        else
        {
            
            printf("a < b");
        }
        
    else
    {
        printf("a = b");
    }
    return 0;
}