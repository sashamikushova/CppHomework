/* File ComplexNumbers.h
kvadratne, kubichne, chetvertoho functions 
using <tgmath.h> and <complex.h>
done by Oleksandra Mikushova (compmath1 group)
Date 13.12.2022
*/
#ifndef COMPLEXNUMBERS_H
#define COMPLEXNUMBERS_H
#include <stdio.h>
#include <tgmath.h>
#include <stdlib.h>
#include <complex.h>
//answers are written in a "complex_numbers_c.txt" file
//find  roots of a square equation
void kvadratne(double complex a, double complex b, double complex c);
//find roots of a cubic equation
void kubichne(double complex a, double complex b, double complex c, double complex d);
//find roots of a quartic equation
void chetvertoho(double complex a, double complex b, double complex c, double complex d, double complex e);
#endif
