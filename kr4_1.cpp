#include <stdio.h> 
#include <math.h>
void task1(){
    unsigned i,n;
    float x;
    printf("n x:\n");
    scanf("%u %f", &n, &x);
    float y=x;
    for(i=0; i<n; i++){
        y=sin(y);
    }
    printf("%f\n", y);
}
void task2(){
    unsigned i,n;
    printf("n=\n");
    scanf("%u", &n);
    printf("%u!=\n", n);
    printf("1");
    for(i=2;i<n;i++){
        printf("*%d", i);
    }
    printf("*%d\n", n);
}
void task3a(){

    unsigned i,n;
    float x,y,power;
    printf("x=\n");
    scanf("%f", &x);
    printf("n=\n");
    scanf("%u", &n);
    y=1;
    power=1;
    for(i=1;i<n;i++){
        power*=x;
        y+=power;
    }
    printf("y=%f\n", y);
}
void task3b(){
    unsigned n=4, x=1, y=2;
    double sum=0;
    for(int i=n; i>=0; i--){
        sum+=pow(x, pow(2,i))*pow(y,i);
    }
    printf("sum: %lf\n", sum);
    
}
void task4(){
    unsigned i,n;
    float x, suma=0;
    printf("n x:\n");
    scanf("%u %f", &n, &x);
    for(i=1;i<n+1;i++){
        suma+=i*pow(x,i);

    }
    printf("suma:%f", suma);
    
}
void task5(){
    int n, fact=1;
    printf("Enter n: \n");
    scanf("%u", &n);
    for(int i=n; i>=1; i-=2){
            fact*=i;
    }
    printf("%d\n", fact);
}
void task6a(){
    int n=2;
    double s=sqrt(2);
    for(int i=1; i<n; i++){
        s=sqrt(s+2);
    }
    printf("%lf\n", s);
}
void task6b(){
    int n;
    scanf("%d", &n);
    double r=sqrt(3*n);
    for(int i=n-1;i<=1; i--){
        r=sqrt(r+3*i);
    }
    printf("%lf\n", r);

}
void task7(){
    unsigned i,n;
    float x,y,a;
    printf("x=\n");
    scanf("%f", &x);
    printf("n=\n");
    scanf("%u", &n);
    y=1;
    a=1;
    for(unsigned i=1; i<=n; i++){
        a*=(x/i);
        y+=a;
    }
    printf("y=%lf\n", y);

}
void task8(){
    unsigned m,n;
    float x,y,a;
    x=1;
    m=0;
    printf("n=\n");
    scanf("%u",&n);
    while(x<n){
        x*=4;
        m++;
    }
    printf("m\n");
}
void task9(){
    unsigned i=0,n;
    printf("n=\n");
    scanf("%u", &n);
    while (pow(2,i)<=n){
        i++;
    }
    printf("vyhlyadu 2^%u\n",i);
}
void task10(){
    double a=1;
    int n=1;
    while (a+1>1){
        a/=2;
        n+=1;
    }
    printf("a=%d\n", n);
}
void task11(){
    int i=0, n=0;
    double a,sum_a=0, harm_a=0;
    do{
        printf("a[%d]=", i);
        scanf("%lf", &a);
        sum_a+=a;
        if(fabs(a)<0.0000001) break;
        harm_a+=1/a;
        i++;
    }
    while(fabs(a)<0.0000001);
}
int main(){
    task1();
    task2();
    task3a();
    task3b();
    task4();
    task5();
    task6a();
    task6b();
    task7();
    task8();
    task9();
    task10();
    task11();
   
}