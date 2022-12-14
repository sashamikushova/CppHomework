/* File MyComplex_test.cpp
for testing MyComplex class
done by Oleksandra Mikushova (compmath1 group)
Date 13.12.2022
*/
#include <iostream>
#include "MyComplex.h"
#include <fstream>
#include "time.h"
using namespace std;



int main(){
    int k;
    int koef;
    while(true){
        cout<<"Enter values from file or console? 1 or 2 ";
        cin>>k;
        if (k!=1 && k!=2) cout<<"wrong input";
        else {
                do{
                    std::cout<<"How many coefficients? Enter 3 (kvadratne), 4 (kubichne) or 5 (4 stepenya)\n";
                    std::cin>>koef;
                    if (koef==3||koef==4||koef==5) break;
                    std::cout<<"Wrong input, try again.\n";
                }while(koef!=3 || koef!=4 || koef!=5);
                    if(k==1){
                            ifstream file("MyComplex_test.txt");
                            MyComplex a, b, c, d, e,z;
                            clock_t start, end;
                            double elapsed_time;
                            switch(koef){
                                case 3:
                                    file>>a>>b>>c;
                                    kvadratne(a,b,c);
                                    
                                    break;
                                case 4:
                                    file>>a>>b>>c>>d;
                                    kubichne(a,b,c,d);
                                    break;


                                case 5:
                                    file>>a>>b>>c>>d>>e;
                                    chetvertoho(a,b,c,d,e);
                                    break;
                            }
                        }
                    else{
                        MyComplex a, b, c, d, e;
                        switch(koef){
                                case 3:
                                    cout<<"Enter 3 complex numbers a1 a2 b1 b2 c1 c2:\n";
                                    cin>>a>>b>>c;
                                    cout<<"a "<<a<<endl;
                                    cout<<"b "<<b<<endl;
                                    cout<<"c "<<c<<endl;
                                    kvadratne(a,b,c);
                                    break;

                                case 4:
                                    cout<<"Enter 4 complex numbers a1 a2 b1 b2 c1 c2 d1 d2:\n";
                                    cin>>a>>b>>c>>d;
                                    cout<<"a "<<a<<endl;
                                    cout<<"b "<<b<<endl;
                                    cout<<"c "<<c<<endl;
                                    cout<<"d "<<d<<endl;
                                    kubichne(a,b,c,d);
                                    break;


                                case 5:
                                    cout<<"Enter 5 complex numbers a1 a2 b1 b2 c1 c2 d1 d2 e1 e2:\n";
                                    cin>>a>>b>>c>>d>>e;
                                    cout<<"a "<<a<<endl;
                                    cout<<"b "<<b<<endl;
                                    cout<<"c "<<c<<endl;
                                    cout<<"d "<<d<<endl;
                                    cout<<"e "<<e<<endl;
                                    chetvertoho(a,b,c,d,e);
                                    break;

                        }
                    }
        }
    }
    
}
