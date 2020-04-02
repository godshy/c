#include <stdio.h>
//自定义数据类型是list_create
//这个程序描述了静态长度的线性表是如何创建并且查找元素的
#define ERROR 0;
#define OK 1;
#define A 0;



typedef struct l_list 
{
    int data[100];
    int length;
}list_create;

int init_list(struct l_list *poi)  //表示struct l_list变量的指针,为啥要指针呢，理解swap就懂了，直接赋值值是不变的
//需要传递的是值所对应的指针，在下面的函数中就要
{
    
    poi->length = 0;
    poi->data[100] = (0);
}

int get_elem(list_create *L, int i, int * Locater_P) //这个函数用来查找链表中的元素输入下标返回值
{
    if ( i == 0 || i > L->length || L->length ==0)   //返回异常，防止用户搞事情
    {
        printf("请输入一个合法的值\n");
        return ERROR;
    }
    * Locater_P = L->data[i - 1];          //用户是不懂线性表的初始值是1的，所以它只会输入1，和实际对应要减一
      printf("你查找的值是%d", *Locater_P);
}                                         //指针还是因为这是函数，赋值是隔离的。

int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    list_create s_list_1;
    init_list(&s_list_1);      //取址符取出地址，是指向结构体的指针  而  &arrary[0] == array &array = 整个数组的首地址
    for (int i = 0; i < 5; i++)
    {
        s_list_1.data[i] = a[i];
        s_list_1.length++;
    }
    for (int i = 0; i< (s_list_1.length); i++)
    {
        printf("表中第[%d]个元素的值为%d.\n", i+1, s_list_1.data[i]);
    }
    printf("这个线性表的长度length是%d\n", s_list_1.length);
    printf("查找第几个元素:\n");
    int i, p;
    scanf("%d", &i);
    get_elem(&s_list_1, i, &p);
    
    
    return 0;


}