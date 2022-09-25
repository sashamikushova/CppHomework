//2.9
#include <stdio.h> 
#include <math.h>


double trianglesquare(double a, double b, double c, double r){
    a=a*0.01745329;
    b=b*0.01745329;
    c=c*0.01745329;
    return r*r*(1/tan(a/2)+1/tan(b/2)+1/tan(c/2));
}
int main(){
    double a, b, c, r;
    printf("Enter 3 angles and r: a b c r");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &r);
    printf("Square: %lf\n", trianglesquare(a,b,c,r));
}