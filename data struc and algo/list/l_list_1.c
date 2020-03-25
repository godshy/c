//如何创建一个可以用的链表
//考虑正在排队买口罩的人
#include <stdio.h>
typedef struct  //这是一个我自己创建的数据类型，名字叫People_Info，struct后面的命名省略了，如果
//没有typedef那么就在创建变量名是要敲struct NAME，很麻烦。一些代码例子也是这样直接调用的
{
    char Name;
    char Sex;
    int Age;
} People_Info;

int main()
{
    People_Info Alice = {'Alice', 'F', 14}; 
    People_Info *_2NEXT_NODE; //创建一个指针，数据类型是我定义的
    
return 0;
}
