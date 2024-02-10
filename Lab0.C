#include <stdio.h>
#include <math.h>
int main()
{
    double a=4, b=4, c=1,v,d,d2;
    printf("Введите числа");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    v = (b*b) - (4*a*c);
    if(v>0){
        d = (-b + sqrt(v))/(2*a);
        d2 = (-b - sqrt(v))/(2*a);
        printf("i=%1f \n", v);
        printf("x1=%1f,x2=%1f", d,d2);
    }
    if(v==0){
        d = (-b + sqrt(v))/(2*a);
        printf("x1=%1f",d);
    }
    if(v<0){
        printf("Корней нет");
    }

    return 0;
}
