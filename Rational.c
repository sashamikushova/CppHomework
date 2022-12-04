#include "Rational.h"
#include <stdio.h>
#include <stdbool.h>
void printRational(Rational x){
    printf("%d/%u", x.nom, x.den);
}
bool inputRational(Rational* x){
    printf("Input nom/den:");
    int r=scanf("%d/%u", &(x->nom), &(x->den));
    return r==2;
}
Rational add(Rational x, Rational y){
    Rational z;
    z.den=x.den*y.den;
    z.nom=x.nom*y.den+x.den*y.nom;
    return z;
}
Rational mult(const Rational* x, const Rational* y){
    Rational z;
    z.nom=(x->nom)*(y->nom);
    z.den=(x->den)*(y->den);
    return z;

}
bool cmp(const Rational * x, const Rational * y){
    Rational z;
    z.den=x->den*y->den;
    z.nom=x->nom*y->den-x->den*y->nom;
    if (z.den<=0) return false;
    else return true;
}
unsigned GCD(unsigned n, unsigned m){
    if (m==0) return n;
    else return GCD(m, n%m);
}
void reduce(Rational * x){
}
