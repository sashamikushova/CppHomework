#ifndef __Rational__
#define __Rational__
#include <stdbool.h>
typedef struct Rational{
    int nom;
    unsigned den;
}Rational;
void printRational(Rational x);
bool inputRational(Rational* x);
Rational add(Rational x, Rational y);
Rational mult(const Rational* x, const Rational* y);
bool cmp(const Rational * x, const Rational * y);
void reduce(Rational * x);
int main(){

}
#endif