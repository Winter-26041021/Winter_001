#include <stdio.h>
#include <math.h>

double area(double a,double b,double c)
{
    double p;
    p=(a+b+c)/2
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(void)
{
    double a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("%.2f",area(a,b,c));
    return 0;
}