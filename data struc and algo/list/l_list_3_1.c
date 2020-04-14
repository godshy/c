//双向循环链表
//A-Z的字母表，用户输入+N(数字) 字母表全部往左移动，负数往右移动
//首先看下字母表怎么生成
#include <stdio.h>
#include <stdlib.h>

#define OK 0;
#define ERROR 1;
#define status int;

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
    return OK;

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

int mov_op(int i, d_list_p d_list)
{
    
    if (i == 0)
    {
        printf("无操作，请再试一次");
        return 0;
    }
    else if ( i < 0)
    {
        d_list_p cursor = d_list;
        while( i < 0)   //字母表往右移动，Z->A->B->C....
        {
            cursor = cursor->previous;
            i+=1;

        }
//        printf("%c", cursor->data);
        print_op(cursor);
    }
    else
    {
        d_list_p cursor1 = d_list;

        while ( i > 0)
        {
            cursor1 = cursor1->next;
            i-=1;
        }
//       printf("%c", cursor1->data);
        print_op(cursor1);
        
    }
        
}


int main()
{
 
    d_list_p n_list;
    create_list(&n_list);
    print_op(n_list);
    printf("请输入数字，要移动几位\n");
    int i;
    scanf("%d", &i);
    mov_op(i, n_list);

    return 0;


}
