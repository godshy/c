//练习swap函数，理解函数和函数直接的数据隔离，以及使用指针传递值(地址的值)来修改实际数据
#include <stdio.h>

int swap(int *x, int *y)   ///这里思考一下 *x在函数里是指针，下面&a作为变量传进来意思就是这个指针的值是a的地址
{
    int temp;             //这里的temp是个确确实实的整形变量
    temp = *x;            //*x是指指针x的值，因为有*号，如果x那就只是个地址
    *x = *y;              //代表两个值互换
    *y = temp;           
    //printf("在swap上的值为%d %d\n", *x, *y);
}

int main()      
{
    int a, b;
    printf("请输入两个数\n");
    scanf("%d%d", &a, &b);  //注意这里如果是值传递，那么是不管用的
    swap(&a, &b);
    printf("swap完后的数是：%d %d\n", a, b); //
    return 0;
    

}
