//只交换指针不交换数据互换两个相邻元素
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0

typedef struct Node{
    int data;
    struct Node *next;
}node;

int init_op(node **head)
{
    *head = (node *)malloc(sizeof(node));
    (*head)->next = NULL;
}


int insert_op(node *Node, int x)
{
    node *cursor;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = x;
    cursor = Node;
    while(cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    new_node->next = NULL;
    cursor->next = new_node;
}

int print_op(node *Node)
{
    node *cursor = Node;
    int pos = 0;
    while (cursor->next != NULL)
    {
        cursor = cursor->next;
        printf("第 %d位数字是  %d \n", pos+1, cursor->data);
        pos++;
    }    
}

int get_length(node *Node)
{
    node *cursor = Node;
    int a = 0;
    while(cursor->next != NULL)
    {
        cursor = cursor->next;
        a++;

    }
    return a;

}

int swap_op(node *Node, int x, int y)
{
    x = x;
    y = y;
    if (x == y)
    {
        printf("ERROR!\n");
        return ERROR;
    }

    else if ( x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    int pos = 0;
    node *cursor = Node;
    node *cursor_next = Node->next;
    while (cursor_next->next != NULL)
    {
        node *temp_n = cursor_next;
        if (pos +1 == x)
        {
            
            temp_n->next = cursor_next->next->next;
            cursor->next = cursor_next->next;
            cursor->next->next = temp_n;
            break;
        }
        cursor = cursor_next;
        cursor_next = cursor_next->next;
        pos++;
    }

}

int main()
{
    node *new;
    init_op(&new);

    srand((unsigned)time(NULL));
    int ran, count;
    count = 0;
    for (int i = 0; i < 10; i++)
    {
        ran = rand() %101;
        insert_op(new, ran);
        count++;    
    }
    int leng = get_length(new);
    printf("the leng is %d\n", leng);
    print_op(new);
    int x, y;
    printf("请输入换位位置\n");
    scanf("%d %d", &x, &y);
    swap_op(new, x, y);
    print_op(new);

}