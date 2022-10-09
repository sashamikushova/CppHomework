#include <iostream>
#include <math.h>
double task1a(double a, double res, unsigned n){
    if(res>a){   
        return res;
    } 
    else{
        res+=1.0/n;
        n++;
        return task1a(a,res,n);
    }
}
double task1b(double a, double res, unsigned n){
    if(res>a) return n;
    else {
        res+=1.0/n;
        n++;
        return task1b(a,res,n);
    }
}
unsigned task2_1(unsigned n){
   if (n==0)
        return 0;
    if (n==1)
        return 1;
    return task2_1(n-1)+task2_1(n-2);
}

unsigned task2_2(unsigned a){
    if (a==0)
        return 0;
    if (a==1)
        return 1;
    unsigned n=1, n1=0, n2=1, res=1;
    while (a>=res){
        res=n1+n2;
        n1=n2;
        n2=res;
        n++;
     }

     return n;
}

unsigned task2_3(unsigned a){
    if (a==0) return 1;
    if (a==1) return 2;
    unsigned n=2, n1=0, n2=1, res=1;
    while(a>=res){
        res=n1+n2;
        n1=n2;
        n2=res;
        n++;
     }
     return n;
}

unsigned task2_4(){
    unsigned n1=0, n2=1, res, sum=1;
    for (unsigned i=1; i<999; i++){
        res=n1+n2;
        n1=n2;
        n2=res;
        sum+=res;
    }
    return sum;
}
unsigned task3(unsigned n){ 
    if(n==4){ 
        return 0; 
    } 
    if(n%2==0){ 
        return task3(n/2); 
    } 
    else{ 
        return task3(3*n+1); 
    } 
} 
unsigned factorial(unsigned a){
    unsigned res=1;
    if(a!=0){
        while(a>1){
            res*=a;
            a--;
        }
    } 
    return res;
}
double task4a(unsigned n){
    if(n==1){
        return 2;
    }
    unsigned f=factorial(n);
    return task4a(n-1)*(1+1.0/f);
}
double task4b(unsigned n){
    if(n==0){
        return 1.5;
    }
    return task4b(n-1)*(1+pow(-1,n)*pow(n,2)/pow(2,n));
}
void task5(){
    int x1=-99, x2=-99, x3=-99, d, i=0;
    while (x3<0){
        d=x2;
        x2=x3;
        x3=x1+x3+100;
        x1=d;
        i++;
    }
    printf("5) naymenshyy dodatniy nomer %d\n", i);
}
double task6_a(int i, double b){
    if (i==0) return 0;
    else return (b+1/(task6_a(i-1,b)+b));
}
double task6_b(int n, int k){
    if (k==0) return (4*n+1);
    else return 4*(n-k)+2+1/(task6_b(n,k-1));

}
double task6_c(int i){
    if (i==0) return 0;
    if (i%2==1) return 1+1/(2+task6_c(i-1));
    else return 1+1/(1+task6_c(i-1));
}
double task7(int n){
    double a1=0, a2=1,b1=1,b2=0,d, suma=0;
    if (n==1) return 2/(a1+b1);
    else if (n==2) return 2/(a1+b1)+4/(a2+b2);
    suma=2/(a1+b1)+4/(a2+b2);
    int k=3;
    while (k!=n){
        b2=b2+a2;
        d=a1;
        a1=a2;
        a2=a2/k+d*b2;
        suma+=pow(2,k)/(b2+a2);
        k++;
    }
    return suma;
}
int main(){
    unsigned n=1;
    double a=1.3,res=0;
    printf("1a) result=%g\n", task1a(a,res,n));
    printf("1b) n = %lf\n", task1b(a,res,n));
    printf("Enter n:");
    scanf("%u",&n);
    a=21;
    printf("2a) %u \n", task2_1(n));
    printf("2b) %u \n", task2_2(a));
    printf("2c) %u \n", task2_3(a));
    printf("2d) %u \n", task2_4());
    printf("3) %u\n", task3(n));
    n=7;
    printf("4a) %g\n", task4a(n));
    printf("4b) %g\n", task4b(n));
    task5();
    printf("6a) %lf\n",task6_a(4,56));
    printf("6b) %lf\n",task6_b(4,4)); //k=n
    printf("6c) %lf\n",task6_c(12));
    printf("7) %lf\n",task7(4));
}

