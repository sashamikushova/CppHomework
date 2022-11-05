//4.30
#include <stdio.h>
#include <stdint.h>
#include <math.h>
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int euler(int n){
    int res=1;
    for (int i=2; i<n; i++){
        if (gcd(i,n)==1)
            res++;
    }
    return res;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("phi=%d",euler(n));
}