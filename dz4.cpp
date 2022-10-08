#include <stdio.h> 
#include <math.h>

void task4_18d(){
    int n;
    float x, dobutok=1;
    printf("n x:\n");
    scanf("%d %f",&n, &x);
    for(int i=1; i<n+1; i++){
        dobutok*=x/i;
    }
    printf("dobutok=%f\n",dobutok);
}

int gcdrib(int m, unsigned n){
    if (m==0) return n;
    else return gcdrib(n%m,m);
}
void task4_26(){
    int m;
    unsigned n;
    printf("m n:\n");
    scanf("%d %u", &m, &n);
    int dilnyk=gcdrib(fabs(m),n);
    printf("%d/%d",m/dilnyk,n/dilnyk);
}
int main(){
    task4_18d();
    task4_26();
}