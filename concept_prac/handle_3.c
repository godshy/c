//strcmp
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "cisco";
    char str2[] = ".com";  
    
    if (!strcmp(str1, str2))   //相等返回0
    {
        printf("完 全 一 致");

    }  
    else
    {
        printf("不一致");
    }
    
    return 0;

}