#include <stdio.h>

struct swap
{
    int a;
    int b;
};


/*int init(struct swap swap_x)
{
    swap_x.a = 1;
    swap_x.b = 2;

}
int main()
{
    struct swap swap_0;
    init(swap_0);
    printf(" a = %d b = %d", swap_0.a, swap_0.b);

}    */   //如果这样的话那么铁定swap.a 和swap.b永远不会是1或者2，因为不同函数传值是隔离的
int init(struct swap * swap_x)
{
    swap_x->a = 1;
    swap_x->b = 2;
}
int main()
{
    struct swap swap_1;
    init(&swap_1);
    printf(" a = %d b = %d", swap_1.a, swap_1.b);  //这样才能得出想要的结果
}