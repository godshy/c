//这个程序实现了静态线性表的插入，删除操作
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0;

typedef struct l
{
    int data[50];
    int length;
}list;

int init(list *NAME)
{
    NAME->data[0] = (0);
    NAME->length = 0;

}
//插入操作，所有元素向后移一位

int insert(list *LIS_NAME,int *i, int  *j)
{
    if (*j > 50 || *j == 0 || LIS_NAME->length == 50)
    {
        printf("出错了\n");
        return ERROR;
        
    }
    for (int temp = LIS_NAME->length; temp >= *j - 1; temp--)
    {
        
        LIS_NAME->data[temp + 1] =  LIS_NAME->data[temp];
    }
    LIS_NAME->data[*j-1] = *i; 
}

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11, 13, 15};
    list list_a;
    init(&list_a);
    for (int i = 0; i <= 8; i++)
    {
        list_a.data[i] = a[i];
        list_a.length++;
    }
    int i, j;
    //char c;
    //while(1 && (c=getchar()!='-'))
    /*{*/
        printf("请输入想要插入的元素和位置:");      //注意所有的跨函数数据操作都要用指针传递
        scanf("%d %d", &i, &j);
        insert(&list_a, &i, &j);
    /*}*/

    for (i = 0; i < list_a.length; i ++)
    {
        printf("第%d位是%d\n", i+1, list_a.data[i]);
    }
    
    return 0;
}