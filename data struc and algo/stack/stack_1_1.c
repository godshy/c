//栈的基本操作
#include<stdio.h>
#include<stdlib.h>

#define ERROR 1
#define OK 0
#define maxsize 50
typedef struct 
{
    int data[maxsize];
    int top;
} stack;

int init_op(stack **p)
{
    *p = (stack *)malloc(50 * sizeof(stack));
    (*p)->top = -1;
    
}

int gettop(stack obj, int *x)
{
    if ( obj.top == -1)
    {
        printf("栈为空!");
        return ERROR;   
    }
    *x = obj.data[obj.top];


}

int push_op(stack *obj, int x)
{
    if (obj->top == maxsize - 1)  //第一个元素，头指针是0，
    {
        printf("栈已经满了");
        return ERROR;
    }
    obj->top ++;
    obj->data[obj->top] = x;
}

int pop_op(stack *obj, int *x)
{
    if ( obj->top == -1)
    {
        printf("栈为空!");
        return ERROR;   
    }
    *x = obj->data[obj->top];
    obj->top --;
}




int main()
{
    stack *p;
    int op;
    init_op(&p);
    while(1)
    {
        printf("请输入要操作的内容\n");
        printf("1. 插入数据\n");
        printf("2. 按出栈顺序显示栈的数据\n");
        scanf("%d", &op);
        if (op == 1)
        {
            while (1)
            {
                int c;
                printf("请输入一个数,-号退出\n");
                scanf("%d", &c);
                getchar();
                if (c == 0)
                {
                    break;
                }
                else
                {
                    push_op(p, c);
                }
                        

            }
            
        }   
        if (op == 2)
        {
            
            int cursor;
            cursor = p->top;
            while ( cursor != -1 )
            {
                printf("栈中元素是%d\n", p->data[cursor]);
                cursor--;

            }
        }
            
    }
    return 0;
}