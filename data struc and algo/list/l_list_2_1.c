//单链表练习1
//每个数据元素一个存储位置，和一个储存后继元素的指针
//注意malloc完了之后需要释放内存(c语言特有)
//实现单链表的增删查改
// 查询的最坏情况是O(n)
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0;
#define OK 0;
#define EMPTY 0;
#define LAST 0;
#define FOUND 1;
#define NOT_FOUND 0;



typedef struct Node
{
    int ID;
    char class;
    char cup;
    int age;
    struct Node *next;
} l_list_node;

//typedef l_list *ling_list_pointer;
//创建了一个l_list类型的指针，

int init_op(l_list_node **list_Node )       //初始化表,因为没有typedef，存放的是l_list类型指针的指针。即为了修改
//指向链表表头的指针，必须&获取其位置，再前名再加一个*
{
    *list_Node = (l_list_node *)malloc(sizeof(l_list_node));  //malloc一个node大小的内存单元，完事了记得free()
                                                                //两层指针存的是函数输入的变量(指向link list的指针的地址)
    (*list_Node)->next = NULL;                                //next指针指向NULL,
                                                           //现在一个带头节点的链表就创建好了
}

void insert_data(l_list_node *list_Node)
{
    int ID;
    printf("请输入技师 ID\n");
    scanf("%d", &ID);
    getchar();
    list_Node->ID = ID;
    char class;
    printf("请输入技师类型(A牌，B牌, etc)\n");
    scanf("%c", &class);
    getchar();
    list_Node->class = class;
    printf("请输入技师罩杯\n");
    char cup;
    scanf("%c", &cup);
    getchar();
    list_Node->cup = cup;
    int age;
    printf("请输入技师年龄\n");
    scanf("%d", &age);
    getchar();
    list_Node->age = age; 
}

void print_menu(void)
{
    printf("请输入你需要执行的操作：\n");
    printf("1. 查看今日出勤\n");   //只show class和id
    printf("2. 查找技师信息\n");
    printf("3. 增加今日出勤\n");
    printf("4. 删除今日出勤\n");   
    printf("0. 退出程序\n");
    printf("重新显示菜单按5\n");
}

int get_length(l_list_node *list_Node)
{
    int length = 0;
    l_list_node *N = list_Node;
    while (N != NULL)
    {
        length +=1;
        N = N->next;
        return(length);
    }

}

int print_op(l_list_node *list_Node)      //打印表的操作函数
{

    l_list_node *N = list_Node->next;
    if (  N == NULL)
    {
        printf("表中无数据！请插入数据！\n\n");
        return ERROR;
    }

    while (N != NULL)
    {
        printf("%c牌 %d号\n", N->class, N->ID);
        printf("%d岁\n", N->age);
        printf("%c罩杯\n\n", N->cup);
        N = N->next;
    }
    
}

int is_last(l_list_node *list_Node)       //判断是不是最后一位的操作函数, 暂时用不到
{
    if (list_Node->next == NULL)
    {
        printf("当前节点为最后一个节点\n");
        return LAST;
    }
}

int if_empty(l_list_node *list_Node)      //判断是否为空  暂时用不到
{
    int list_length = get_length(list_Node);
    if (list_length < 1)
    {
        printf("此表为空！\n");
        return EMPTY;
    }
}

void insert_op( l_list_node *list_Node)    //插入操作, deepthroat
{
    l_list_node *temp, *n_Node;
    n_Node = (l_list_node *)malloc(sizeof(l_list_node));
    if (n_Node == NULL)
    {
        printf("内存分配失败!\n");
        exit(1);
    }

    /*while (loop_control < *list_length )
    {
        p = list_Node->next;
        loop_control++;
    }*/
    insert_data(n_Node);
    n_Node->next = list_Node->next;
    list_Node->next = n_Node;
}

int get_elem_by_ID(l_list_node *list_Node, int i)
{
    l_list_node *N = list_Node;
    while (N != NULL)
    {
        if (N->ID == i)
        {
            printf("找到了！\n");
            printf("%c牌 %d号\n", N->class, N->ID);
            printf("%d岁\n", N->age);
            printf("%c罩杯\n\n", N->cup);
            return OK;
        }
        N = N->next;
    }
    printf("没找到！\n\n");
    return ERROR;

}

int get_elem_by_seq(l_list_node * list_Node, int i)  //待修改，暂时用不到
{
    int list_length = get_length(list_Node);
    int loop_control = 0;
    l_list_node * p;
    for (; loop_control < list_length; loop_control++)
    {
        p = list_Node->next;
        if (i == list_Node->ID)
        {
            printf("%c %d\n", list_Node->class, list_Node->ID);
            printf("%d岁\n", list_Node->age);
            printf("%c罩杯\n\n", list_Node->cup);
            return FOUND;
        }      
    }
    printf("未找到！\n");
    return NOT_FOUND;
}

int del_op(l_list_node * list_Node, int i)      //删除操作
{
    l_list_node *N = list_Node;
    l_list_node *N_NEXT = list_Node->next;
    if (list_Node->next == NULL)
    {
        printf("表为空，无法删除！\n");
        return ERROR;
    }
    while (N_NEXT!= NULL)
    {
        if (N_NEXT->ID == i)
        {
            N->next = N_NEXT->next;
            free(N_NEXT);
            printf("操作完成！\n\n");
            return OK;
        }
        N = N_NEXT;
        N_NEXT = N_NEXT->next;

    }

}

int main()
{
    l_list_node *js_info;
    init_op(&js_info);   //头指针

    while (1)
    {
        print_menu();
        int choice;
        scanf("%d", &choice);
        if (choice ==1)           // 显示链表所有信息
        {
           /*int a =if_empty(js_info);
           if ( a == 0)
           {
               printf("表长为0，请创建新的表！\n");
           }
           else*/
            print_op(js_info);

        }
        else if (choice == 2)    // 查看链表某节点的数据
        {

            printf("请输入你要搜索的技师ID：\n");
            int x;
            scanf("%d", &x);
            get_elem_by_ID(js_info, x);
                 
        }
        else if (choice == 3)    //增加数据
        {
            printf("请输入技师数据\n");
            while (1)
            {
                char c;
                getchar();
                insert_op(js_info);      
                printf("输入完成，是否继续输入？输入N退出,任意键继续\n");
                scanf("%c", &c);                          
                if(c == 'N')
                {
                    break;
                }                                  
            }  
        }

        else if (choice == 4)    //删除数据
        {
            printf("请输入js的ID！\n");
            int I;
            scanf("%d", &I);
            del_op(js_info, I);
        }

        else if (choice == 0)
        {
            break;
        }

        else if (choice ==5)
        {
            print_menu();
        }
        
        else
        {
            printf("请输入正确的操作符！\n");
        }   


    }

    return 0;

}