#include <stdio.h>
#include <math.h>
int main()
{
    double a=3, b=4, c=-2,v,d,d2;
    v = (b*b) - (4*a*c);
    d = (-b + sqrt(v))/(2*a);
    d2 = (-b - sqrt(v))/(2*a);
    printf("i=%1f \n", v);
    printf("x1=%1f,x2=%1f", d,d2);

    return 0;
