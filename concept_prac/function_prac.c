#include <stdio.h>
int sum(int n);
int sum(int n)
{
    int result = 0;
    do
    {
        result +=n;
    } while (n-- >0);
    return result;
    
}
int main()
{
    int n, result;
    printf("请输入一个值：");
    scanf("%d", &n);
    result = sum(n); //传入形式参数
    printf("1+2+3+...+n的结果是： %d\n", result);
    return 0;

}