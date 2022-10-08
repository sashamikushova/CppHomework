
#include <stdio.h> 
#include <math.h>
void print_digits(unsigned n){
    //3.1 3.2
    unsigned a=n%10; 
    unsigned b=n/10%10;
    unsigned c=n/100;
    printf("%u %u %u\n", a,b,c);
    printf("suma cyfer: %u\n", a+b+c);
    printf("sprava nalivo: %u%u%u\n", a, b, c);
    if (a!=b&&b!=c&&a!=c){
        printf("%u%u%u\n", a, b, c);
        printf("%u%u%u\n", a, c, b);
        printf("%u%u%u\n", c, a, b);
        printf("%u%u%u\n", c, b, a);
        printf("%u%u%u\n", b, c, a);
        printf("%u%u%u\n", b, a, c);

    }
    else printf("cyfry povtoruutsya");
}
void task3(){
    int x,y,z;
    unsigned long long a,b,c;
    int r_s=scanf("%d,%d,%d", &x, &y, &z);
    if (x<pow(2,10) && y<pow(2,10) && z<pow(2,10)){
        printf("%d\n", x*y*z);
    }
    if (a<pow(2,21) && b<pow(2,21) && c<pow(2,21)){
        printf("%llu\n", a*b*c);
    }
}
uint16_t task4(uint8_t x, uint8_t y){
    return (uint16_t)((uint32_t)x*y);
}
double max(double a, double b){
    return a>b?a:b;
}
double min(double a, double b){
    return a<b?a:b;
}
void task5(double a, double b){

    printf("naybilshe: %lf\n", max(a,b));
    printf("naymenshe: %lf\n",min(a,b));
}
void task6(double a, double b, double c){
    printf("naybilshe: %lf\n", max(max((unsigned)a,(unsigned)b),max((unsigned)c,(unsigned)b)));
    printf("naymenshe: %lf\n", min(min((unsigned)a,(unsigned)b),min((unsigned)c,(unsigned)b)));
    
}

void task7() {
  double a,b,c,d;
  printf("Enter a b c\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  d=b*b-4*a*c;
  if (a!=0 && b!=0 && c!=0){
    if (d>0){
        printf("2 koreni: %lf %lf", -b+sqrt(d)/(2*a), b+sqrt(d)/(2*a));
    }
  else if (d==0) printf("1 korin %lf", -b/(2*a));
  else printf("0");
  }
  else if (a==0 && b==0 && c==0){
    printf("bezlich koreniv");
  }
  else if ((a==0 && c==0) || b==0 && c==0){
    printf("1 korin: 0");
  }
  else if (a==0 && b==0){
    printf("0 koreniv");
  }
  else if (b==0){
    if (-c/a>=0){
      printf("2 koreni: %lf %lf", sqrt(-c/a),sqrt(-c/a));
    } 
    else printf("nemaye koreniv");
  }
  else if (a==0){
    printf("1 korin: %lf", -c/b);
  }
  else {
    printf("2 koreni: 0 %lf", -b/a);
  }
}
int main(){
    unsigned x;
    scanf("%u", &x);
    if ((x>=1000)||(x<=99)){
        printf("wrong number\n");
    }
    else {
        print_digits(x);
        }
    task3();
    task4(15, 255);
    task5(23, 45);
    task6(135, -211, 67);
    task7();


}