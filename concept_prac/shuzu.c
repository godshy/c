//练习数组的创建 输入 读取
#include <stdio.h>
#define NUM 10
int main()
{
    int a[NUM];
    int sum = 0;
    for ( int i = 0; i <10; i++)
    {
        printf("请输入成绩：");
        scanf("%d", &a[i]);
        sum += a[i];

    }
    printf("avg is %.2f\n", (double)sum / NUM);
    return 0;
}