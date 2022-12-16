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
void kvadratne(complex<double> a, complex<double> b, complex<double> c);
//find roots of a cubic equation
void kubichne(complex<double> a, complex<double> b, complex<double> c, complex<double> d);
//roots of a quartic equation
void chetvertoho(complex<double> a, complex<double> b, complex<double> c, complex<double> d, complex<double> e);

#endif