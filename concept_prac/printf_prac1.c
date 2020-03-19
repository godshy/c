//数据格式化练习
#include <stdio.h>

int main()

{
    printf("打印五個字符：%c, %c, %c, %c, %c\n", 70, 105, 115, 104, 67);  /**/
    printf("前边用 填充：%10d\n", 2015); /*%10d中10表示为这个存储的变量预留10个字节的位置，不够就补充空格*/
    printf("前面用0填充：%.10d\n", 2015); /*如果存储的数据没有达到位数要求，使用.就在前面补0*/
    printf("右對齊，保留2位：%10.2f\n", 3.1416); /*默认是右对齐*/
    printf("左對齊,保留3位：%-10.3f\n", 3.1416); /*-号表示左对齐*/
    printf("左對齊，指數形式：%10e\n", 520000.0); /*小写e表示输出小写，大写表示输出大写*/
    printf("左對齊，指數形式：%-10E\n", 520000.0); /*大写E*/

return 0;
}