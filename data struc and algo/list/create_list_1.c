//表的存储结构分配
#include <stdio.h>

#define LIST_INIT_SIZE 100


typedef struct List_init    //struct结构体调用语句为struct List_init = {}，如果后续没有这个步骤可以省略名字
{
    int list[LIST_INIT_SIZE]; //表基本长度，定长
    int length;         //表长度
} DEC_SLIST_STATIC;                              //typedef创建了一个可以使用的变量声明，就类似int，double一样
                                        //直接typedef int ALIAS 就好理解了

typedef struct 
{
    int *basis;       //表的基本长度，根据指针位置
    int length;       //表长度
    int listsize;     //表当前存储字节数
} DEC_SLIST_DYNAMIC; //动态分配存储结构

