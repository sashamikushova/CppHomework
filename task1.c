#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    printf("x=");
    scanf("%lf", &x);
    y = pow(x, 8);
    printf("%lf\n", y);
    printf("%20.4lf", y);
}