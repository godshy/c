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

int get_elem(list  *NAME, int i, int *Locate_p)
{
    if (i - 1 <0 || i > NAME->length || i > 50)
    {
        printf("NM$L\n\n");
        return ERROR;
    }
    * Locate_p = i - 1;
    printf("你要找的元素值为%d, 位于第%d个\n", NAME->data[*Locate_p], i);

}
//插入操作，所有元素向后移一位

int insert(list *LIS_NAME,int *i, int  *j)
{
    if (*j > LIS_NAME->length + 1 || *j < 1 || LIS_NAME->length == 50)
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
    int locater;
    int locate;
    int a[] = {1, 3, 5, 7, 9, 11, 13, 15};
    list list_a;
    init(&list_a);
    for (int i = 0; i < 8; i++)
    {
        list_a.data[i] = a[i];
        list_a.length++;
    }
level_1:
    printf("\n请输入想要进行的操作\n\n");
    printf("1. 查找元素\n");
    printf("2. 增加元素\n");
    printf("3. 删除元素\n");
    printf("4. show列表\n");
    int choose;
    scanf("%d", &choose);
    if ( choose == 1)
    {
        printf("要查找哪个元素?\n");
        scanf("%d", &locate);
        get_elem(&list_a, locate, &locater);
        getchar();
        goto level_1;
    }
    else if ( choose == 2)
    {
        int i,j;
        printf("请输入想要插入的元素和位置:\n");      //注意所有的跨函数数据操作都要用指针传递
        scanf("%d %d", &i, &j);
        insert(&list_a, &i, &j);
        goto level_1;         
    }
    else if ( choose == 4)
    {
        for (int i = 0; i < list_a.length; i ++)
        {
            printf("第%d位是%d\n", i+1, list_a.data[i]);
        }  
        goto level_1;      
    }
    
    


    //char c;
    //while(1 && (c=getchar()!='-'))
    /*{*/
    
    
    return 0;
}