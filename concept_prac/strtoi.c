
#include<stdlib.h>
#include<stdio.h>

int strtoi_replace(const char *ptr)
{
    int i = 0;

    while (ptr[i] != '\0');
    {
        if (ptr[i] >= 48 && ptr[i] <= 57)
        {
            printf("%c", ptr[i]);
            i++;

        }
        else
        {
            i++;
        }
        
     

    }

}

int main()
{
    char *stringx, *stopstring;
    int base;
    long l;    
    stringx = "35314afdfasdfadfaf";//源字符串
    strtoi_replace(stringx);

    return 0;
}