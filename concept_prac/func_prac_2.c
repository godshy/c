#include <stdio.h>
int max(int, int);
int max(int x, int y)
{
    if (x > y)
        return x;
    else 
        return y; //形式参数和实际参数不一样，但return数据类型要和下面一致
    
}
int main()
{
    int d, b, c;
    printf("请输入两个数");
    scanf("%d%d",&c, &d);
    b = max(c, d);
    printf("%d", b);


    return 0;
}