//这段代码演示了如何执行顺序表的插入和删除还有查找
# include <stdio.h>
# include <stdlib.h>
#define MAXSIZE 50
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10
typedef struct SList
{
    int *data;
    int length;
    int listsize;
}SqList;

int init_list (SqList *L)
{
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    L->data = (int *) malloc(LIST_INIT_SIZE*sizeof(int));
}


int main()
{
    int a[] = {1, 3, 5, 7, 9, 11, 13, 15};
    SqList list1;
    init_list(&list1);
    for ( int i = 0; i < 8; i++)
    {
        list1.data[i] = a[i];
        list1.length++;
    }


   

    return 0;
}