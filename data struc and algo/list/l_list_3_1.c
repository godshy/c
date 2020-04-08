//双向循环链表
//A-Z的字母表，用户输入+N(数字) 字母表全部往左移动，复数往右移动
//首先看下字母表怎么生成
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct d_list
{
    char data;
    struct d_list *previous;
    struct d_list *next;
} dual_list, *d_list_p;


int create_list(d_list_p *l_pointer)  //注意**指针的含义：函数调用指针的地址，将其修改成node_head的地址。
//相当于d_list_p ** NAME
{
    d_list_p node_head, cursor;


    node_head = (dual_list *)malloc(sizeof(dual_list));
    char c = 'A';
    node_head->data = c;
    cursor = node_head;
    node_head->next = NULL;
    node_head->previous = NULL;
    for ( int i = 1; i< 26; i++)
    {
        d_list_p New_node = (dual_list *)malloc(sizeof(dual_list));
        New_node->data = c + i;
        cursor->next = New_node;
        New_node->next = node_head;
        New_node->previous = cursor;
        node_head->previous = New_node;
        cursor = New_node;
    }
    *l_pointer = node_head;

}

int print_op(d_list_p d_list)
{
    d_list_p cursor;
    cursor = d_list;
    while (cursor->next != d_list)
    {
        printf(" %c", cursor->data);
        cursor = cursor->next;
    }
    printf(" %c\n", cursor->data);
    return 0;
}

clock_t start, stop;
double duration;

int main()
{
    start = clock();
    d_list_p n_list;
    create_list(&n_list);
    stop = clock();
    duration = ((double)(stop - start));
    printf("%f", duration);
    print_op(n_list);
    
    



}
