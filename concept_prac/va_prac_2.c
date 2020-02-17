#include <stdio.h>

int main()

{
    float r;
    double c;
    double s;
    r = 5;
    c = 2*3.14*r;
    s = 3.14*r*r;
    printf("半径为%.0f的圆，周长是%.2f，面积是%.2f", r, c, s); 
            
    return 0;
}