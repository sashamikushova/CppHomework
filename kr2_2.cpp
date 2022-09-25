//2.4e
#include <stdio.h> 
#include <math.h>
float task24e(float x){
    return ((x*x+1)*(x*x+1)-x*x)*x;
}
int main(){
    float x;
    printf("x=");
    scanf("%f", &x);
    printf("task24e(%f)=%f\n", x, task24e(x));

}