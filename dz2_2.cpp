//2.17в
#include <stdio.h> 
#include <math.h>

double softSign_derivative(double x){
    return 1/(1+abs(x))/(1+abs(x));
}
int main(){
    double x;
    printf("Enter x:\n");
    scanf("%lf", &x);
    printf("SoftSign derivative: %lf", softSign_derivative(x));
}