#include <stdio.h>
int main()
{
    int a = 3, b = 3;
    (a = 0) && (b = 5); //逻辑与前提是做和右成立，但是这里左边不成立(0)，所以b不会运算
    printf("a = %d, b + %d\n", a, b);

    (a = 1) || (b = 5); //任何一位成立就成立，因为左式成立，一旦一判断成立就不会对右式计算
    printf("a = %d, b = %d\n", a, b); 
    return 0;
   
}