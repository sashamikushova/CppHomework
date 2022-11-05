#include <stdio.h>
#include <stdint.h>
#include <math.h>
void task5_18_a(int k){
    int n=1;
    long long m=1;
    double power;
    while((int) log10(m)+1<k){
        power=(int)(log10(n*10))+1;
        m*=pow(10,power);
        m+=n*10;
        n*=10;
    }
    printf("a)\n%lli\n",m);
    printf("k: %lli\n",(long long)m%10);
}
void task5_18_b(int k){
    int n=1;
    long long m=1;
    double power;
    while((int)log10(m)+1<k){
        power=(int)(log10(n+1))+1;
        m*=pow(10,power);
        m+=n+1;
        n++;
    }
    printf("б)\n%lli\n",m);
    printf("k: %lli\n",(long long)m%10);
}
void task5_18_v(int k){
    int n=2;
    long long m=1;
    double power;
    while((int) log10(m)+1<k){
        power=(int)(log10(n*n))+1;
        m*=pow(10,power);
        m+=n*n;
        n+=1;
    }
    printf("в)\n%lli\n",m);
    printf("k: %lli\n",(long long)m%10);
}
int fib(int n){
    if (n<=1) return n;
    return fib(n - 1) + fib(n - 2);
}
void task5_18_g(int k){
    int n=1;
    long long m=1;
    double power;
    while((int)log10(m)+1<k){
        int f=fib(n+1);
        power=(int)(log10(f))+1;
        m*=pow(10,power);
        m+=f;
        n++;
    }
    printf("г)\n%lli\n",m);
    printf("k: %lli\n",(long long)m%10);
}

int main(){
    unsigned k;
    printf("Enter k: ");
    scanf("%u",&k);
    task5_18_a(k);
    task5_18_b(k);
    task5_18_v(k);
    task5_18_g(k);
}