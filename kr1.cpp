//1.1
#include <stdio.h> 
#include <math.h>
void task11(){
    double x=2, y=31, a=45*54-11, v=67%5, f=(2*45.1+3.2)/2;
    int b=15/4;
    float c=15.0/4;
    printf("2+31=%lf\n", x+y);
    printf("45*54-11=%lf\n", a);
    printf("15/4=%d\n", b);
    printf("15.0/4=%f\n", c);
    printf("67ostacha5=%lf\n", v);
    printf("(2*45.1+3.2)/2=%lf\n", f);
}
void task12(){
    float a=pow(10, -4), pi=3.141592, e=2.718281, d=log(100);
    double c=pow(5,1/2);
    long double b=24.33E5;
    printf("%.2f %.2f %.2f %.2f %.2f %LE", a, pi, e, d, c, b);
}
void task13(){
    double bukva;
    printf("Enter a:\n");
    scanf("%lf", &bukva);
    printf("- %lf - %lf - %lf\n%lf | %lf | %lf\n- %lf - %lf - %lf\n", bukva, bukva, bukva, bukva, bukva, bukva, bukva, bukva, bukva);
}
void task14(){
    double m1, m2, r;
    printf("Enter m1 m2 r");
    scanf("%lf %lf %lf", &m1, &m2, &r);
    printf("%le\n", m1*m2/r);
}

double task15c(double x, double step, double raz){
    double rez=pow(x,step/raz);
    for(int i=0; i<step/raz-1; i++) rez*=rez;
    return rez;
}
void task15(){
    double x;
    printf("Enter x:");
    scanf("%lf", &x);
    printf("%lf %lf %lf %lf %lf %lf\n", task15c(x,4,2), task15c(x,6,3), task15c(x,9,3), task15c(x,15,5), task15c(x,28,6), task15c(x,64,6));
}
void task16(){
    double C, F;
    printf("Enter C");
    scanf("%lf", &C);
    F=9.0*C/5.0+32.0;
    printf("Farenheit: %le\n", F);
}
void task17(){
    float x;
    printf("Enter x");
    scanf("%f", &x);
    printf("%f %f %f %f\n", trunc(x), x-trunc(x), floor(x), ceil(x));
    float y=x;
    printf("%.0f, %f, %d, %d\n", x, x-(int)y, (int)y, (int)y+1);
}
void task18(){
    float a, b;
    printf("Enter:\n a\n b\n");
    scanf("%f\n %f", &a, &b);
    printf("riznytsya %f dobutok %f\n",a-b, a*b);
}
void task19(){
    double x, y;
    printf("Enter x y");
    scanf("%lf %lf", &x, &y);
    printf("serednye aryfm: %lf\n serednye harm: %lf\n", (x+y)/2, 2/(1/x+1/y));
}
void task110(){
    int x1, x2, x3, x4, x5;
    double x6, x7, x8, x9, x10;
    printf("Enter x1 x2 x3 ... x10");
    scanf("%d %d %d %d %d %lf %lf %lf %lf %lf", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10);
    printf("x | %d | %d | %d | %d | %d |\n- | - - | - - | - - | - - | - - |\ny | %lf | %lf | %lf | %lf | %lf |", x1, x2, x3, x4, x5, x6, x7, x8, x9, x10);
}

int main(){
   task11();
   task12();
   task13();
   task14();
   task15();
   task16();
   task17();
   task18();
   task19();
   task110();
}

