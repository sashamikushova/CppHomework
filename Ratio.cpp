//kr18.cpp
#include "Ratio.h"


Ratio Ratio::add(const Ratio& x){
    Ratio r;
    r.nom=x.nom*den+x.den*nom;
    r.den=den*x.den;
    return r;
}
Ratio Ratio:: mult(const Ratio& x ){
    Ratio r;
    r.nom=x.nom*nom;
    r.den=den*x.den;
    return r;

}
unsigned Ratio::gcd(unsigned x, unsigned y){
    if(x==0||y==0) return x+y;
    if(x>y) return gcd(y,x%y);
    return gcd(x,x%y);
}