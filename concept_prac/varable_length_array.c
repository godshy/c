#include<stdio.h>
int main()
{
    int n, i;
    printf("请输入字符个数:\n");
    scanf("%d", &n);
    char a[n+1];
    printf("请开始输入字符:");
    getchar();                //不加就多接受了一个换行符，要不然就多了一个回车在缓冲区里面
    for ( i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }
    a[n] = '\0';
    printf("你输入的字符串是: %s\n", a);

    return 0;
}