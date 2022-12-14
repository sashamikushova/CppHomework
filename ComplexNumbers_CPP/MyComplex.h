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
        MyComplex(){real=0;imag=0;}
        MyComplex(double x, double y){
            real=x;
            imag=y;
        }
        void input(){
            std::cout<<"Enter complex number";
            std::cin>>real;
            std::cin>>imag;
        }
        void output(){
           if(imag<0)
               std::cout<<real<<imag<<"i"<<"\n";
           else
               std::cout<<real<<"+"<<imag<<"i"<<"\n";
       }

        MyComplex operator+(const MyComplex& c)const{ //operator overload (+,-,*,/)
            MyComplex c1;
            c1.real=real+c.real;
            c1.imag=imag+c.imag;
            return c1;
        }

        
        MyComplex operator-(const MyComplex& c) const {
            MyComplex c1;
            c1.real=real-c.real;
            c1.imag=imag-c.imag;
            return c1;
        }
        MyComplex operator*(const MyComplex& c)const{
            MyComplex c1;
            c1.real=real*c.real-imag*c.imag;
            c1.imag=real*c.imag+imag*c.real;
            return c1;
        }
        
        MyComplex operator/(const MyComplex& c)const{
            MyComplex my=MyComplex(real,imag),nom, den, spryazh=MyComplex(c.real,-c.imag);
            nom=my*spryazh;
            den=c*spryazh;
            my=MyComplex(nom.real/den.real,nom.imag/den.real); 
            return my;
        }
        MyComplex operator*(double x)const{
            MyComplex c1;
            c1.real=real*x;
            c1.imag=imag*x;
            return c1;
        }
        
        MyComplex operator/(double x)const{
            MyComplex c1;
            c1.real=real/x;
            c1.imag=imag/x;
            return c1;
        }
        MyComplex operator-(double x)const{
            MyComplex c1=MyComplex(x,0), my=MyComplex(real,imag);
            return my-c1;
        } 
        MyComplex mysqrt(){                                 //function for finding square root 
            double magnitude = sqrt(real*real+imag*imag);
            double phase = atan2(imag, real);
            double magnitude_cbrt = pow(magnitude, 1.0/2.0);
            double phase_cbrt = phase/2.0;
            double real_part = magnitude_cbrt * cos(phase_cbrt);
            double imag_part = magnitude_cbrt * sin(phase_cbrt);
            return MyComplex(real_part, imag_part);
        }
        MyComplex myconj(){                         //spryazhene complex number
            return MyComplex(real,-imag);
        }

        MyComplex mycbrt(){                                 //function for finding cubic root
             double magnitude = sqrt(real*real+imag*imag);
            double phase = atan2(imag, real);
            double magnitude_cbrt = pow(magnitude, 1.0/3.0);
            double phase_cbrt = phase/3.0;
            double real_part = magnitude_cbrt * cos(phase_cbrt);
            double imag_part = magnitude_cbrt * sin(phase_cbrt);
            return MyComplex(real_part, imag_part);
        }
        
        
};

std::ostream& operator<<(std::ostream& stream, const MyComplex& other){ //operator overload (<<,>>)
    if(other.imag<0) stream<<other.real<<other.imag<<"i"<<"\n";
    else stream<<other.real<<"+"<<other.imag<<"i"<<"\n";
    return stream;
}
std::istream& operator>>(std::istream& stream, MyComplex& other){
    stream >> other.real >> other.imag;
    return stream;
}
//kvadratne kubichne and chetvertoho write answers to MyComplex_test_w.txt file
void kvadratne(MyComplex a,MyComplex b,MyComplex c){        //function for finding roots of a square equation
            std::ofstream file("MyComplex_test_w.txt");
            MyComplex x1,x2; 
            x1=b*b-a*c*4.0;
            x2=x1.mysqrt();
            x1=(x2*(-1)-b)/2.0/a; 
            x2=(x2-b)/2.0/a; 
            std::cout<<"x1="<<x1<<std::endl; 
            std::cout<<"x2="<<x2<<std::endl;
            file << "x1 x2:\n"<<x1<<" "<<x2;
            std::cout<<"Vidpovidi zapysano v MyComplex_test_w.txt"<<std::endl;
            file.close();
        }
void kubichne(MyComplex a,MyComplex b,MyComplex c,MyComplex d){     //function for finding roots of a cubic equation
        std::ofstream file("MyComplex_test_w.txt");
        MyComplex p=(c/a)-(b*b/a/a/3.), q=(b*b*b*2.)/a/a/a/27.-(b*c/3.)/a/a+d/a;
        MyComplex sqr=q*q*(1./4.)+p*p*p*(1./27.);
        MyComplex r=sqr.mysqrt(), cbr1=q*(-0.5)+r, cbr2=r*(-1)+q*(-0.5);
        MyComplex sol1=cbr1.mycbrt(), sol2=cbr2.mycbrt();
        MyComplex w1(-1./2., sqrt(3.)/2.), w2(-1./2., -sqrt(3.)/2.);
        MyComplex x1=sol1 + sol2, x2=w1*sol1 + w2*sol2, x3=w2*sol1 + w1*sol2;
        std::cout<<"Result:"<<std::endl;
        std::cout<<"x1="<<x1<<std::endl;
        std::cout<<"x2="<<x2<<std::endl;
        std::cout<<"x3="<<x3<<std::endl;
        file << "x1 x2 x3:\n"<<x1<<" "<<x2<<" "<<x3;
        std::cout<<"Vidpovidi zapysano v MyComplex_test_w.txt"<<std::endl;
        file.close();
    }

void chetvertoho(MyComplex a,MyComplex b,MyComplex c,MyComplex d,MyComplex e){  //roots of a quartic equation
        std::ofstream file("MyComplex_test_w.txt");
        MyComplex alpha=b*b*(-3)/8./a/a+c/a, bet=b*b*b/8./a/a/a-b*c/2./a/a+d/a;
        MyComplex gamma=b*b*b*b*(-3)/256./a/a/a/a+c*b*b/16./a/a/a-b*d/4./a/a+e/a;
        MyComplex p=alpha*(-1)*alpha/12.-gamma, q=alpha*(-1)*alpha*alpha/108.+alpha*gamma/3.-bet*bet/8.;
        MyComplex a1=q*q/4.+p*p*p/27.,a2=(q/2.)-(q*q/4.)+(p*p*p/27.);
        MyComplex r1=(q/2.)+((a1).mysqrt()),r2=(q/2.)-((a2).mysqrt());
        MyComplex u=r1.mycbrt();
        MyComplex y;
        if (u.real==0 && u.imag==0) y=alpha*(-5/6.);
        else y=alpha*(-5./6.)-u+p/3./u;
        MyComplex w=(alpha+gamma*2.).mysqrt(),x1,x2,x3,x4;
        x1=(b/a/4.)*(-1)+w/2.+(alpha*(-3.)-y*2.-bet*2./w).mysqrt()/2.;
        x2=(b/a/4.)*(-1)+w/2.-(alpha*(-3.)-y*2.-bet*2./w).mysqrt()/2.;
        x3=(b/a/4.)*(-1)+(w/2.)*(-1)+(alpha*(-3.)-y*2.+bet*2./w).mysqrt()/2.;
        x4=(b/a/4.)*(-1)+(w/2.)*(-1)-(alpha*(-3.)-y*2.+bet*2./w).mysqrt()/2.;

        std::cout<<"Result:"<<std::endl;
        std::cout<<"x1="<<x1<<std::endl;
        std::cout<<"x2="<<x2<<std::endl;
        std::cout<<"x3="<<x3<<std::endl;
        std::cout<<"x4="<<x4<<std::endl;
        file << "x1 x2 x3 x4:\n"<<x1<<" "<<x2<<" "<<x3<<" "<<x4;
        std::cout<<"Vidpovidi zapysano v MyComplex_test_w.txt"<<std::endl;
        file.close();
    }
#endif

