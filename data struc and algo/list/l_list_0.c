//如何创建一个可以用的链表
//考虑正在排队买口罩的人
#include <stdio.h>
#include <stdlib.h>
typedef struct O //这是一个我自己创建的数据类型，名字叫People_Info，struct后面的命名省略了，如果
//没有typedef那么就在创建变量名是要敲struct NAME，很麻烦。一些代码例子也是这样直接调用的
{
    char Name[10];
    char Sex[5];
    int Age;
    struct People_Info *_2_NEXT_NODE_4_People_Info;
    // int length, 这里就代表了线性表长度
    } People_Info;   /*这是一个链表的特征*/

int main(void)
{
    People_Info Alice = {"Alice", "F", 14}; 
    People_Info *head; //创建一个指针，数据类型是我定义的
    head = &Alice; //这一步就是将指针指向我创建的Alice，即第一个元素，如果在struct内定义指针 struct *next那么就是链表

    printf("the name is %s\n", head->Name); //表示了使用访问自定数据类型中name的调用法
    printf("the sex is %s\n", head->Sex);
    printf("the Age is %d\n", Alice.Age); //表示了通过变量名调用法
    
return 0;
}
