#include <iostream>
#include <string>
#include <fstream>
int main(){
    std::fstream f;
    std::string fname;
    std::cout <<"File:";
    std::cin>>fname;

    f.open(fname.c_str());
    if(!f.is_open()){
        std::cout<<"error open file "<<fname<<" !\n";
        return -1;

    }
    double d;
    int sign=1;
    double Sum=0;
    char c;
    while(true){
        f>>d;
        if (sign>0){
            Sum+=d;
        }
        else Sum-=d;
        f>>c;
        if(c=='+'){
            sign=1;

        }
        else if(c=='-') sign=-1;
        else if(c=='=') break;
        else std::cout<<"incorrect sign";
        return -2;
    }
    std::cout<<"Sum is "<<Sum<<"\n";

}