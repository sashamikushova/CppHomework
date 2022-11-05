//5.14 5.16л
#include <stdio.h>
#include <stdint.h>
#include <math.h>

bool task5_14(int a, int b){
    if (a==0) return false;
    if (a%10==b) return true;
    else return (task5_14(a/10, b));
}
double task5_16l(double x, double eps){
    int chys=1, znam=2;
    bool znak=1;
    double suma=1;
    double y=1/pow((1+x),(1/2));
    printf("y=%lf\n", y);
    double dodanok=1;
    while (fabs(dodanok)>eps){
        if (znak) {
            dodanok*=chys/znam*x;
            suma-=dodanok;
            znak=2;
            chys+=2;
            znam+=2;
        }
        else{
            dodanok*=chys/znam*x;
            suma+=dodanok;
            znak=1;
            chys+=2;
            znam+=2;
        }

    }
    return suma;

    
}

int main(){
    int a;
    printf("Enter chyslo: ");
    scanf("%d",&a);
    int b;
    printf("Enter cyfra: ");
    scanf("%d",&b);
    printf("%s\n", task5_14(a,b)?"true":"false");
    double x;
    double eps;
    printf("Enter x: ");
    scanf("%lf",&x);
    printf("Enter eps: ");
    scanf("%lf",&eps);
    printf("%lf", task5_16l(x,eps));


}
