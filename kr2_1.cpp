//2.1-2.6
#include <stdio.h> 
#include <math.h>
void task21(){
    double x; 
    printf("x:"); 
    scanf("%lf", &x); 
    printf("cos=%.2lf\n",cos(x)); 
}
void task22(){
    float a, b; 
    printf("Enter a:"); 
    scanf("%f", &a); 
    printf("Enter b:"); 
    scanf("%f",&b); 
    printf("hipotenuza: %f\n", sqrt(pow(a,2)+pow(b,2)));
}
void task23(){
    float a, b, c; 
    printf("Enter a: "); 
    scanf("%f", &a); 
    printf("Enter b: "); 
    scanf("%f",&b); 
    printf("Enter c: "); 
    scanf("%f",&c); 
    double S=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4; 
    printf("S=%f\n", S); 
}
double Rosenbrock2d(double x, double y) { 
    double z=x*x-y; 
    return 100*z*z+(x-1)*(x-1); 
} 
void task25(){
    double x,y,c; 
    printf("x="); 
    scanf("%lf", &x); 
    printf("y="); 
    scanf("%lf", &y); 
    c=Rosenbrock2d(x,y); 
    printf("%lf\n",c); 
}
double storona(double x1, double y1, double x2, double y2){ 
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2)); 
} 
void task26(){
    double x1, y1, x2, y2, x3, y3; 
    printf("Enter x1 y1:"); 
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter x2 y2:"); 
    scanf("%lf %lf", &x2, &y2); 
    printf("Enter x3 y3:"); 
    scanf("%lf %lf", &x3, &y3); 
    x1=storona(x1, y1, x2, y2); 
    x2=storona(x2, y2, x3, y3); 
    x3=storona(x3, y3, x1, y1); 
    printf("S=%f\n", sqrt((x1+x2+x3)*(x1+x2-x3)*(x1+x3-x2)*(x2+x3-x1))/4); 
}
int main(){
    task21();
    task22();
    task23();
    task25();
    task26();
}