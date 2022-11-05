#include <stdio.h>
#include <stdint.h>
#include <math.h>
double task5_6_a(int n, double b){
    if (b<=0) return 0;
    double res=b;
    for(unsigned i=1;i<=n;i++){
        res=b+1.0/res;
    }
    return res;
}
double task5_6_aa(int n, double b){
    if(b<=0) return 0;
    double res=b;
    int nom=b;
    int den=1;
    for(unsigned i=1;i<=n;i++){
        nom=b*nom+den;
        den=nom;
    }
    return 0;
}

double task5_7(int n){
    double a1=0, a2=1, ai;
    double b1=1, b2=0, bi;
    double s1=2/(a1+b1);
    double S=s1;
    if(n==1) return S;
    S+=4/(a2+b2);
    if(n==2) return S;
    int power2=4;
    for(int i=3;i<=n;i++){
        bi=a2+b2;
        ai=a2/i+ai*bi;
        power2*=2;
        S+=power2/(ai+bi);
        a1=a2;
        a2=ai;
        b1=b2;
        b2=bi;
    }
    return S;
}
double task5_8(double x, double eps){
    double y=x-x*x*x/3;
    int i=0;
    double dodanok=-x*x*x/3;
    while(fabs(dodanok)>eps){
        i++;
        dodanok*=(-x*x)/(2*i)/(2*i+1)/(2*i+3)*(2*i+1);
        y+=dodanok;
    }
    return y;

}

double fun(double m){
    return (tan(m)-m);
}
double task5_19(double (*f)(double),double a, double b, double eps){
    if(f(a)*f(b)>0) return 0;
    double c=(a+b)/2;
    if(b-a<eps){
        return c;
    }
    if(f(a)*f(c)<0) return task5_19(f,a,c,eps);
    return task5_19(f,c,b,eps);

}
int main(){
    printf("%lf\n",task5_6_a(10,2));
    unsigned n;
    printf("Enter n: ");
    scanf("%u",&n);
    double x,e;
    printf("Enter x e:");
    scanf("%lf %lf",&x,&e);
    task5_8(x,e);
    double a=0.001, b=1.5, eps=1e-5;
    printf("%lf", task5_19(fun,a,b,eps));
    return 0;

}