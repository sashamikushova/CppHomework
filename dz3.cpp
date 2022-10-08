#include <stdio.h> 
#include <math.h>

double max(double a, double b){
    return a>b?a:b;
}
double min(double a, double b){
    return a<b?a:b;
}
void task3_18(){
    double x1, x2, y1, y2, n1, n2, m1, m2;
    printf("Enter 4 dots' coordinates: x1 x2 y1 y2 n1 n2 m1 m2\n");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &x2, &y1, &y2, &n1, &n2, &m1, &m2);
    printf("Livyy nyzhniy kut pryamokutnyka: (%lf, %lf)\n", min(x1,n1),min(y1, n1));
    printf("Pravyy verhniy kut pryamokutnyka: (%lf, %lf)\n", max(y1,m1), max(y2,m2));
}
double ReLu(double x){
    if (x<=0) return 0;
    else return x;
}
double task3_23b(double x){
    if (ReLu(x)==0) return 0;
    else return 1;
}
int main(){
    task3_18();
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    task3_23b(x);
}