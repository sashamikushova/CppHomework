#include <stdio.h>
#include <stdint.h>
void task6_19(unsigned k){
    unsigned m=3, kilkist=0;
    for(int i=0;i<4;i++){
        if ((k|m)==k){
            kilkist+=1;
        }
        m<<=2;
    }
    m=96;
    for(int i=0;i<3;i++){
        if ((k|m)==k){
            kilkist+=1;
        }
        m>>=2;
    }
    printf("%u raziv\n",kilkist);
}
void task6_21(unsigned k){
    int a1=1<<7, a2=1;
    k|=a1;
    k|=a2;
    printf("%u",k);

}
int main(){
    unsigned a;
    printf("Enter a: ");
    scanf("%u",&a);
    task6_19(a);
    task6_21(a);

}