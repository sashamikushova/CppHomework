//7.10a 7.8 ye
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define N 20
void inputArray(int mas[],size_t n){
    for(int i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&(mas[i]));
    }
}
void task10a_min(int mas[], size_t n){
    int min=mas[0], nomer=0;
    for(size_t i=0;i<n;i++){
            if(min>=((i+1)*mas[i])) {
                min=(i+1)*mas[i];
                nomer=i;
        }
    }
    printf("min=%d*%d\n",nomer+1,mas[nomer]);
}
bool perfectSquare(int x){
    int s=sqrt(x);
    bool res=((s*s==x)?true:false);
    return res;
}
bool isFibonacci(int x){
    return  ((perfectSquare(5*x*x+4))||(perfectSquare(5*x*x-4)));
}

void task8ye(int mas3[], size_t n){
    int kilkist=0;
    for(int i=0;i<n;i++){
        if (isFibonacci(mas3[i])) kilkist++;
    }
    printf("kilkist chysel fibonacci: %d", kilkist);
}

int main(){
    size_t n;
    int p[N];
    printf("n=");
    scanf("%zu",&n);
    inputArray(p,n);
    task10a_min(p,n);
    task8ye(p,n);
    return 0;
}