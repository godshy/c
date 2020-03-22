//strcpy, strncpy
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "original";
    char str2[] = "new";  
    char str3[100];
    strcpy(str1, str2);    //把str2连同终止符一起拷贝到str1， 后面到前名的    str1的长度必须要比str2长
    strcpy(str3, "copy successful");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    return 0;


}