/* File MyComplex.h
header file for MyComplex class, kvadratne, kubichne and chetvertoho fuctions
done by Oleksandra Mikushova (compmath1 group)
Date 13.12.2022
*/
#ifndef MyComplex_HPP
#define MyComplex_HPP
#include <iostream>
#include <fstream>
#include <cmath>
#include <complex.h>
class MyComplex{    //class for complex number values
    public:
        float real;
        float imag;
        MyComplex();
        MyComplex(double x, double y);
        void input();
        void output();

        MyComplex operator+(const MyComplex& c)const; //operator overload (+,-,*,/)
        MyComplex operator-(const MyComplex& c) const;
        MyComplex operator*(const MyComplex& c)const;
        MyComplex operator/(const MyComplex& c)const;
        MyComplex operator*(double x)const;
        MyComplex operator/(double x)const;
        MyComplex operator-(double x)const;
        MyComplex mysqrt();                                //function for finding square root 
        MyComplex myconj();                       //spryazhene complex number
        MyComplex mycbrt();                                 //function for finding cubic root
        
        
};

std::ostream& operator<<(std::ostream& stream, const MyComplex& other); //operator overload (<<,>>)
std::istream& operator>>(std::istream& stream, MyComplex& other);
//kvadratne kubichne and chetvertoho write answers to MyComplex_test_w.txt file
void kvadratne(MyComplex a,MyComplex b,MyComplex c);      //function for finding roots of a square equation
void kubichne(MyComplex a,MyComplex b,MyComplex c,MyComplex d);     //function for finding roots of a cubic equation

void chetvertoho(MyComplex a,MyComplex b,MyComplex c,MyComplex d,MyComplex e); //roots of a quartic equation
#endif

