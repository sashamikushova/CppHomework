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
void kvadratne(double complex a, double complex b, double complex c){
    FILE *file = fopen("complex_numbers_c.txt", "w");
    double complex x1, x2, temp; 
    temp=csqrt(b*b-4.0*a*c); 
    x1=(0.0-b-temp)/a/2.0; 
    x2=(0.0-b+temp)/a/2.0; 
    printf("Result:\n");
    printf("x1=%f+%fi\n", creal(x1), cimag(x1));
    printf("x2=%f+%fi\n", creal(x2), cimag(x2));
    fprintf(file, "x1: %f + %fi\n", creal(x1), cimag(x1));
    fprintf(file, "x2: %f + %fi\n", creal(x2), cimag(x2));
    printf("Vidpovidi zapysano v file complex_numbers_c.txt");
    fclose(file);
    
}
//find roots of a cubic equation
void kubichne(double complex a, double complex b, double complex c, double complex d){
    FILE *file = fopen("complex_numbers_c.txt", "w");
    double complex p=c/a-b*b/3./a/a;
    double complex q=2.*b*b*b/27./a/a/a-b*c/3./a/a+d/a;
    double complex sqr=q*q*(1./4.)+p*p*p*(1./27.);
    double complex r=csqrt(sqr),cbr1=-0.5*q+r, cbr2=-0.5*q-r;
    double complex sol1=cpow(cbr1,1./3.), sol2=cpow(cbr2,1./3.);
    double complex w1=(-1/2.+I*csqrt(3.)/2.), w2=(-1./2.-csqrt(3.)/2.*I);
    double complex x1=sol1+sol2, x2=w1*sol1+w2*sol2, x3=w2*sol1+w1*sol2;
    printf("Result:\n");
    printf("x1=%f+%fi\n", creal(x1), cimag(x1));
    printf("x2=%f+%fi\n", creal(x2), cimag(x2));
    printf("x3=%f+%fi\n", creal(x3), cimag(x3));
    fprintf(file, "x1: %f + %fi\n", creal(x1), cimag(x1));
    fprintf(file, "x2: %f + %fi\n", creal(x2), cimag(x2));
    fprintf(file, "x3: %f + %fi\n", creal(x3), cimag(x3));
    printf("Vidpovidi zapysano v file complex_numbers_c.txt");
    fclose(file);
    
}
//find roots of a quartic equation
void chetvertoho(double complex a, double complex b, double complex c, double complex d, double complex e){
    FILE *file = fopen("complex_numbers_c.txt", "w");
    double complex alpha=-3.*b*b/8./a/a+c/a, bet=b*b*b/8./a/a/a-b*c/2./a/a+d/a;
    double complex gamma=-3.*b*b*b*b/256./a/a/a/a+c*b*b/16./a/a/a-b*d/4./a/a+e/a;
    double complex p=-alpha*alpha/12.-gamma, q=-alpha*alpha*alpha/108.+alpha*gamma/3.-bet*bet/8.;
    double complex r1=q/2.+sqrt(q*q/4.+p*p*p/27.),r2=q/2.-sqrt(q*q/4.+p*p*p/27.);
    double complex u=pow(r1,1/3.);
    double complex y;
    if (creal(u)==0 && cimag(u)==0) y=-5/6.*alpha;
    else y=-5/6.*alpha-u+p/3./u;
    double complex w=sqrt(alpha+2.*gamma),x1,x2,x3,x4;
    double f=0.5;
    x1=-b/4./a+(w+sqrt(-3.*alpha-2.*y-2.*bet/w))*f;
    x2=-b/4./a+w/2.-sqrt(-3.*alpha-2.*y-2.*bet/w)*f;
    x3=-b/4./a+-w/2.+sqrt(-3.*alpha-2.*y+2.*bet/w)*f;
    x4=-b/4./a+-w/2.-sqrt(-3.*alpha-2.*y+2.*bet/w)*f;
    printf("Result:\n");
    printf("x1=%f+%fi\n", creal(x1), cimag(x1));
    printf("x2=%f+%fi\n", creal(x2), cimag(x2));
    printf("x3=%f+%fi\n", creal(x3), cimag(x3));
    printf("x4=%f+%fi\n", creal(x4), cimag(x4));
    fprintf(file, "x1: %f + %fi\n", creal(x1), cimag(x1));
    fprintf(file, "x2: %f + %fi\n", creal(x2), cimag(x2));
    fprintf(file, "x3: %f + %fi\n", creal(x3), cimag(x3));
    fprintf(file, "x4: %f + %fi\n", creal(x4), cimag(x4));
    printf("Vidpovidi zapysano v file complex_numbers_c.txt");
    fclose(file);

}
#endif
