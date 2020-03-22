#include <stdio.h>
int main ()
{
    //int a;
    //int *p = &a;
    int b[] = {1, 2, 3, 4} ;
    char c[] =  "cccc";
    //printf("请输入\n");
    //scanf("%d", p);
    //printf("你输入的是a = %d\n", *p);
    //int *p = b;
    
    printf("*b = %d, *b+1 = %d", *b, *(b+1)); //注意这里写成*p+1就错了，因为*p+1表示指针p的值+1,
    /*printf("%p\n", b);
    printf("%p ->%p->%p ->%p \n", &b[0],&b[1], &b[2], &b[3]);
    printf("%p\n", c);
    printf("%p ->%p->%p ->%p \n", &c[0],&c[1], &c[2], &c[3]);*/
    //0x7fffe69e6fe0 ->0x7fffe69e6fe4->0x7fffe69e6fe8 ->0x7fffe69e6fec 
    return 0;

}