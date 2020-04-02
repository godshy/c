//循环链表练习
//约瑟夫问题
//背景41个人数到3自杀，数到3自杀，最后剩下两个人是谁？   
//把顺序按照编号输出
#include <stdio.h>
#include <stdlib.h>

#define ERROR 1;

typedef struct re_list
{
    int x;
    struct re_list *next;
} c_li;

int insert (c_li **c_list, int i)
{
    if ( i <= 1)
    {
        return ERROR;
    }
    c_li *head = (c_li *)malloc(sizeof(c_li));
    head->next = head;
    c_li *ass = head;
    for ( int j = 1; j <= i; ++j)
    {
        c_li *Node = (c_li *)malloc(sizeof(c_li));
        Node->x = j;
        Node->next = head;
        ass->next = Node;
        ass = Node;
    }
    ass->next = head->next;
    free(head);
    *c_list = ass->next;
    

}

void print_op(c_li *c_list)
{
    printf("是否打印表？\n");
    char c;
    scanf("%s", &c);
    if (c == 'Y')
    {
        c_li *temp = c_list;
        int count = 0;
        while (count < 41)
        {            

        printf("数字为%d\n\n", temp->x);
        temp = temp->next;
        count +=1;
            
            

        }
    }

}
int main()      //因为有头节点参与，所以在每次循环时有问题
{
    c_li *c_list;
    //int a = 41;
    insert(&c_list, 41);
    print_op(c_list);
    c_li *temp = c_list;
    c_li *need_be_del = temp;
     
    while (temp != temp->next)
    {
        for (int i = 1; i<2; i++)
        {
            temp = temp->next;
        }
        printf("%d->", temp->next->x);
        need_be_del = temp->next;
        temp->next= need_be_del->next;
        free(need_be_del);
        temp = temp->next; //这一步是删除完后移动到下一个人这重新开始计数，容易忘记。
    }
   

    

  
}
