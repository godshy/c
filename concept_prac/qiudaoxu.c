int main ()
{
    int a;
    int b;
    int count = 0;
    printf("输入一个数：\n");
    scanf("%d", &a);
    while ( a > 0)
    {
        b = a % 10;
        a = a / 10;
        count = (count + b) * 10;

    }
    printf("number is %d\n", count/10);

    return 0;
}

