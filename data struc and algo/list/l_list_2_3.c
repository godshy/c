//随机创建元素，使用快速查找查找链表中当中的数据
#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node * next;
} node;
typedef node *node_p;


int init_list(node_p name)
{
    name = (node_p )malloc(sizeof(node));
    name->next = NULL;
}

int main()
{
    node x;
    init_list(&x);

    

}