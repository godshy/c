#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define FALSE 0
typedef int EleType;
typedef struct Node
{
    EleType data; //数据域
    struct Node *Next; //指针域
} Node;
typedef struct Node* LinkList;

void getinput(Node *La)
{
    puts("请输入一个数");
    scanf("%d", &La->data);
}


void insertList(Node **La)
{
    Node *p,*temp;
    p=(Node *)malloc(sizeof(Node));
    if( p == NULL )
    {
        puts("sorry,内存分配失败");
    }
    getinput(p);
    if( *La==NULL )
    {
        *La = p;
        p->Next = NULL;
    }
    else
    {
        temp = *La;
        *La = p;
        p->Next = temp;
    }
}


void printfList(Node *L)
{
    int count = 1;
    while( L!=NULL )
    {
        printf("第%d个数据,数据是：%d\n",count,L->data);
        L=L->Next;
        count++;

    }
}

int main()
{
    Node *aL = NULL;
    insertList(&aL);
    insertList(&aL);
    insertList(&aL);
    insertList(&aL);
    printfList(aL);
    return 0;
}