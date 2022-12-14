/* File ComplexNumbers_test.c
for testing "ComplexNumbers.h"
using <complex.h> library
done by Oleksandra Mikushova (compmath1 group)
Date 13.12.2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include "ComplexNumbers.h"




int main(){
    int k,r;
    int koef;
    while(1){
        printf("Enter values from file or console? 1 or 2");
        scanf("%d",&k);
        if (k!=1 && k!=2);
        else {
               do{
                    printf("How many coefficients? Enter 3 (kvadratne), 4 (kubichne) or 5 (4 stepenya)\n");
                    scanf("%d",&koef);
                    if (koef==3||koef==4||koef==5) break;
                    printf("Wrong input, try again.\n");
                }while(koef!=3 || koef!=4 || koef!=5);
                    if(k==1){
                            FILE *fp = fopen("ComplexNumbers_test_c.txt", "r");
                            double complex a, b, c, d, e;
                            switch(koef){
                                case 3:
                                    fscanf(fp, "%lf+%lfi", &creal(a), &cimag(a));
                                    fscanf(fp, "%lf+%lfi", &creal(b), &cimag(b));
                                    fscanf(fp, "%lf+%lfi", &creal(c), &cimag(c));
                                    kvadratne(a,b,c);
                                    fclose(fp);
                                    break;
                                case 4:
                                    fscanf(fp, "%lf+%lfi", &creal(a), &cimag(a));
                                    fscanf(fp, "%lf+%lfi", &creal(b), &cimag(b));
                                    fscanf(fp, "%lf+%lfi", &creal(c), &cimag(c));
                                    fscanf(fp, "%lf+%lfi", &creal(d), &cimag(d));
                                    
                                    kubichne(a,b,c,d);
                                    fclose(fp);
                                    break;


                                case 5:
                                    fscanf(fp, "%lf+%lfi", &creal(a), &cimag(a));
                                    fscanf(fp, "%lf+%lfi", &creal(b), &cimag(b));
                                    fscanf(fp, "%lf+%lfi", &creal(c), &cimag(c));
                                    fscanf(fp, "%lf+%lfi", &creal(d), &cimag(d));
                                    fscanf(fp, "%lf+%lfi", &creal(e), &cimag(e));
                                    chetvertoho(a,b,c,d,e);
                                    fclose(fp);
                                    break;
                            }
                        }
                    else{
                        double complex a, b, c, d, e;
                        double ia,ra,ib,rb,ic,rc,id,rd,ie,re;
                        switch(koef){
                            case 3:
                                    printf("Enter 3 complex numbers a1 a2 b1 b2 c1 c2:\n");
                                    r=scanf("%lf %lf %lf %lf %lf %lf",&ra,&ia,&rb,&ib,&rc,&ic);
                                    if(r==6){
                                        a=creal(ra)+cimag(ia)*I;
                                        b=creal(rb)+cimag(ib)*I;
                                        c=creal(rc)+cimag(ic)*I;
                                        printf("a=%f+%fi\n", creal(a), cimag(a));
                                        printf("b=%f+%fi\n", creal(b), cimag(b));
                                        printf("c=%f+%fi\n", creal(c), cimag(c));
                                    
                                        kvadratne(a,b,c);
                                        break;
                                    }

                            case 4:
                                    printf("Enter 4 complex numbers a1 a2 b1 b2 c1 c2 d1 d2:\n");
                                    r=scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&ra,&ia,&rb,&ib,&rc,&ic,&rd,&id);
                                    if (r==8){
                                    
                                    
                                        a=creal(ra)+cimag(ia)*I;
                                        b=creal(rb)+cimag(ib)*I;
                                        c=creal(rc)+cimag(ic)*I;
                                        d=creal(rd)+cimag(id)*I;
                                        printf("a=%f+%fi\n", creal(a), cimag(a));
                                        printf("b=%f+%fi\n", creal(b), cimag(b));
                                        printf("c=%f+%fi\n", creal(c), cimag(c));
                                        printf("d=%f+%fi\n", creal(d), cimag(d));
                                        
                                        kubichne(a,b,c,d);
                                        
                                        break;
                                    }


                             case 5:
                                    printf("Enter 5 complex numbers a1 a2 b1 b2 c1 c2 d1 d2 e1 e2:\n");
                                    r=scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&ra,&ia,&rb,&ib,&rc,&ic,&rd,&id,&re,&ie);
                                    if(r==10){
                                        a=creal(ra)+cimag(ia)*I;
                                        b=creal(rb)+cimag(ib)*I;
                                        c=creal(rc)+cimag(ic)*I;
                                        d=creal(rd)+cimag(id)*I;
                                        e=creal(re)+cimag(ie)*I;
                                        printf("a=%f+%fi\n", creal(a), cimag(a));
                                        printf("b=%f+%fi\n", creal(b), cimag(b));
                                        printf("c=%f+%fi\n", creal(c), cimag(c));
                                        printf("d=%f+%fi\n", creal(d), cimag(d));
                                        printf("e=%f+%fi\n", creal(e), cimag(e));
                                    
                                        chetvertoho(a,b,c,d,e);
                                        break;
                                    }

                        }
                    }
        }
    }
    
}