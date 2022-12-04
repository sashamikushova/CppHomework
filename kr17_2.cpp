#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <cstdio>
int main(){
    std::ofstream f;
    std::ifstream g;
    std::string fname;
    std::string gname="tmp.txt";
    std::cout <<"File:";
    std::cin>>fname;

    f.open(fname.c_str());
    if(!f.is_open()){
        std::cout<<"error open file "<<fname<<" !\n";
        return -1;

    }
    g.open(gname.c_str());
    if(!g.is_open()){
        std::cout<<"error open file "<<gname<<" !\n";
        return -1;

    }
    std::string Artikles[]={"der","die","das"};
    std::string wort;
    bool Nomen=false;
    while(f>>wort){
        if (Nomen){
            wort[0]=toupper(wort[0]);
            Nomen=false;
        }
        for(int i=0;i<3;i++){
            std::string x=Artikles[i];
            if (x==wort){
                Nomen=true;

            }
        }
        g<<wort<<" ";
    }
    f.close();
    g.close();
    //rename(gname.c_str(),fname.c_str());
    g.open(gname.c_str());
    if(!g.is_open()){
        std::cout<<"error open file "<<gname<<" !\n";
        return -1;

    }
    f.open(fname.c_str());
    if(!f.is_open()){
        std::cout<<"error open file "<<fname<<" !\n";
        return -1;

    }
}