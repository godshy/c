//文字处理函数
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = {"www.cisco.com"};
    printf("size of str is %ld\n", sizeof(str));   //
    printf("strlen of str is %lu\n", strlen(str));  //字符个数不包含/0
    return 0;

}