//strcat
// 新的写法 strcat(str1, strlen(str1) + strlen(str2)+1, str2)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "cisco";
    char str2[] = ".com";  
    
    strcat(str1, str2);    //拼接
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;


}