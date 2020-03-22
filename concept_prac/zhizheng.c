#include <stdio.h>
int main()
{
    char a = 'F';
    int f = 123;
    char *pa = &a;
    int *pb = &f;
    *pa = 'c';
    *pb += 1;
    printf("a = %c\n", *pa);
    printf("f = %d\n", *pb);
    printf("size of pa = %ld\n", sizeof(*pa));
    printf("sizeoff pb = %ld\n", sizeof(*pb));
    printf("addr of pa is : %p\n", pa);
    printf("addr of pa is : %p\n", pb);

    //注意指针不能直接未初始化就用
    /*
    main()
    {
        int *a;
        *a = 123;
        return 0;
        绝对禁止

    }
    */
    


}