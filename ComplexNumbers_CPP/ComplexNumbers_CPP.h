/* File ComplexNumbers_CPP.h
header file for kvadratne, kubichne and chetvertoho fuctions
using <complex> library
done by Oleksandra Mikushova (compmath1 group)
Date 13.12.2022
*/
#include <iostream>
#include <iomanip>
#include <complex>
#include <fstream>
#ifndef COMPLEXNUMBERS_CPP
#define COMPLEXNUMBERS_CPP
using namespace std;
//answers are written to complex_numbers_test_cpp.txt file
//find roots of a square equation
void kvadratne(complex<double> a, complex<double> b, complex<double> c){
    ofstream file("complex_numbers_test_cpp.txt");
    complex<double> x1,x2;
    x1=b*b-a*c*4.0;
    x2=sqrt(x1);
    x1=(0.0-x2-b)/2.0/a; 
    x2=(x2-b)/2.0/a; 
    cout<<"Result:"<<endl;
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    file<<"x1 x2:" << x1 << " " << x2 <<endl;
    cout<<"Vidpovidi zapysano v file complex_numbers_test_cpp.txt";
    file.close();

}
//find roots of a cubic equation
void kubichne(complex<double> a, complex<double> b, complex<double> c, complex<double> d){
    ofstream file("complex_numbers_test_cpp.txt");
    complex<double> p=c/a-b*b/3./a/a;
    complex<double> q=2.*b*b*b/27./a/a/a-b*c/3./a/a+d/a;
    complex<double> sqr = q*q*(1./4.)+p*p*p*(1./27.);
    complex<double> r = sqrt(sqr), cbr1 = -0.5*q + r, cbr2 = -0.5*q - r;
    complex<double> sol1 = pow(cbr1, 1./3.), sol2 = pow(cbr2, 1./3.);
    complex<double> w1(-1./2., sqrt(3.)/2.), w2(-1./2., -sqrt(3.)/2.);
    complex<double> x1 = sol1 + sol2, x2 = w1*sol1 + w2*sol2, x3 = w2*sol1 + w1*sol2;

    cout<<"Result:"<<endl;
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    cout<<"x3="<<x3<<endl;
    file<<"x1 x2 x3:" << x1 << " " << x2 <<" "<<x3<<endl;
    cout<<"Vidpovidi zapysano v file complex_numbers_test_cpp.txt";
    file.close();
    }
//roots of a quartic equation
void chetvertoho(complex<double> a, complex<double> b, complex<double> c, complex<double> d, complex<double> e){
    ofstream file("complex_numbers_test_cpp.txt");
    complex<double> alpha=-3.*b*b/8./a/a+c/a, bet=b*b*b/8./a/a/a-b*c/2./a/a+d/a;

    complex<double> gamma=-3.*b*b*b*b/256./a/a/a/a+c*b*b/16./a/a/a-b*d/4./a/a+e/a;
    complex<double> p=-alpha*alpha/12.-gamma, q=-alpha*alpha*alpha/108.+alpha*gamma/3.-bet*bet/8.;

    complex<double> r1=q/2.+sqrt(q*q/4.+p*p*p/27.),r2=q/2.-sqrt(q*q/4.+p*p*p/27.);
    complex<double> u=pow(r1,1/3.);

    complex<double> y;

    if (u.real()==0 && u.imag()==0) y=-5/6.*alpha;
    else y=-5/6.*alpha-u+p/3./u;
    complex<double> w=sqrt(alpha+2.*gamma),x1,x2,x3,x4;
    double f=0.5;
    x1=-b/4./a+(w+sqrt(-3.*alpha-2.*y-2.*bet/w))*f;
    x2=-b/4./a+w/2.-sqrt(-3.*alpha-2.*y-2.*bet/w)*f;
    x3=-b/4./a-w/2.+sqrt(-3.*alpha-2.*y+2.*bet/w)*f;
    x4=-b/4./a-w/2.-sqrt(-3.*alpha-2.*y+2.*bet/w)*f;
    cout<<"Result:"<<endl;
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    cout<<"x3="<<x3<<endl;
    cout<<"x4="<<x4<<endl;
    file<<"x1 x2 x3 x4:" << x1 << " " << x2 <<" "<<x3<<" "<<x4<<endl;
    cout<<"Vidpovidi zapysano v file complex_numbers_test_cpp.txt";
    file.close();
}
#endif