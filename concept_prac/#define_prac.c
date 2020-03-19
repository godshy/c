#include <stdio.h>

#define url "http://www.cisco.com" /*不需要分号，如果加了分号会把分号也替换进去*/
#define NAME "Chuck Robbins"
#define job "CEO"
#define corp_name "CISCO"

int main ()
{   
    printf("url of the company %s is %s. ", corp_name, url);
    printf("%s is %s, head of the company.\n", NAME, job);
    return 0;
}
