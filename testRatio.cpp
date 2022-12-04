//kr18
#include "Ratio.h"
#include <cmath>
#include <iostream>
Ratio hgregory(double eps){
    Ratio r;
    r.setNom(1);
    int i=2;
    int sign=-1;
    while(i*i*eps<1){
        Ratio r2(sign,i*i);
        sign*=-1;
        i+=2;
        r=r+r2;
    }
    return r;

}
int main(){
    /*
    Ratio a1(1,2),a2,a3;
    //a1.input();
    std::cin>>a2;
    //a3=a1.add(a2);
    a3=a1+a2;
    //a3.show();
    std::cout<<a3;
    const int N=5;
    Ratio mas[N];
    for(int i=0;i<3;i++){
        std::cin>>mas[i];
    }
    Ratio minR=mas[0];
    for(int i=0;i<3;i++){
        if(mas[i]<minR) minR=mas[i];
    }
    std::cout<<minR;
    */
   Ratio r3=hgregory(0.01);
   Ratio twelve(12,1);
   Ratio r4=r3.mult(twelve);
   std::cout<<sqrt(r4.value());

}