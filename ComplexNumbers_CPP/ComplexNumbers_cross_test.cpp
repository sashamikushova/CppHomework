/* File ComplexNumbers_cross_test.cpp
file for testing "ComplexNumbers_CPP.h" and "ComplexNumbers.h" simultaniosly
done by Oleksandra Mikushova (compmath1 group)
Date 13.12.2022
*/
#include "ComplexNumbers_CPP.h"
#include "ComplexNumbers.h"
#include <iostream>
#include <iomanip>
#include <complex>
#include <fstream>
int main(){
    int k;
    int koef;
    while(true){
                do{
                    std::cout<<"How many coefficients? Enter 3 (kvadratne), 4 (kubichne) or 5 (4 stepenya)\n";
                    std::cin>>koef;
                    if (koef==3||koef==4||koef==5) break;
                    std::cout<<"Wrong input, try again.\n";
                }while(koef!=3 || koef!=4 || koef!=5);
                complex <double> a1, b1, c1, d1, e1;
                double complex a2, b2, c2, d2, e2;
                double ia,ra,ib,rb,ic,rc,id,rd,ie,re;
                switch(koef){
                            case 3:
                                    cout<<"Enter 3 complex numbers a1 a2 b1 b2 c1 c2:\n";
                                    cin>>ra>>ia>>rb>>ib>>rc>>ic;
                                    a1=complex <double>(ra,ia);
                                    b1=complex <double>(rb,ib);
                                    c1=complex <double>(rc,ic);
                                    
                                    cout<<"a1 "<<a1<<endl;
                                    cout<<"b1 "<<b1<<endl;
                                    cout<<"c1 "<<c1<<endl;

                                    a2=creal(ra)+cimag(ia)*I;
                                    b2=creal(rb)+cimag(ib)*I;
                                    c2=creal(rc)+cimag(ic)*I;
                                    kvadratne(a1,b1,c1);
                                    kvadratne(a2,b2,c2);
                                    break;

                            case 4:
                                    cout<<"Enter 4 complex numbers a1 a2 b1 b2 c1 c2 d1 d2:\n";
                                    cin>>ra>>ia>>rb>>ib>>rc>>ic>>rd>>id;
                                    a1=complex <double>(ra,ia);
                                    b1=complex <double>(rb,ib);
                                    c1=complex <double>(rc,ic);
                                    d1=complex <double>(rd,id);
                                    
                                    cout<<"a1 "<<a1<<endl;
                                    cout<<"b1 "<<b1<<endl;
                                    cout<<"c1 "<<c1<<endl;
                                    cout<<"d1 "<<d1<<endl;
                                    
                                    a2=creal(ra)+cimag(ia)*I;
                                    b2=creal(rb)+cimag(ib)*I;
                                    c2=creal(rc)+cimag(ic)*I;
                                    d2=creal(rd)+cimag(id)*I;
                                    
                                    kubichne(a1,b1,c1,d1);
                                    kubichne(a2,b2,c2,d2);
                                    break;


                             case 5:
                                    cout<<"Enter 5 complex numbers a1 a2 b1 b2 c1 c2 d1 d2 e1 e2:\n";
                                    cin>>ra>>ia>>rb>>ib>>rc>>ic>>rd>>id>>re>>ie;
                                    a1=complex <double>(ra,ia);
                                    b1=complex <double>(rb,ib);
                                    c1=complex <double>(rc,ic);
                                    d1=complex <double>(rd,id);
                                    e1=complex <double>(re,ie);
                                    cout<<"a "<<a1<<endl;
                                    cout<<"b "<<b1<<endl;
                                    cout<<"c "<<c1<<endl;
                                    cout<<"d "<<d1<<endl;
                                    cout<<"e "<<e1<<endl;
                                    a2=creal(ra)+cimag(ia)*I;
                                    b2=creal(rb)+cimag(ib)*I;
                                    c2=creal(rc)+cimag(ic)*I;
                                    d2=creal(rd)+cimag(id)*I;
                                    e2=creal(re)+cimag(ie)*I;
                                   
                                    chetvertoho(a1,b1,c1,d1,e1);
                                    chetvertoho(a2,b2,c2,d2,e2);
                                    break;

                        }
    }

}