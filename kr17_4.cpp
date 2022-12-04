#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
bool check(std::string str){
    bool opened=0;
    int last=0,t=str.length(),i;
    for(i=0;i<t;i++){
        if(str.substr(i,4)=="<td>"){
            last=i;
            opened=true;
        } 
        if(str.substr(i,5) == "</td>"){
            if(opened){
                str.replace(last, 4, "");
                str.replace(i-4, 5, "");
                t=str.length();
                i=-1;
                opened=false;
            } 
            else {
                return false;
            }
        }
    }
    return !opened;
}
int main(){
    std::ifstream f("kr17.txt"); 
    std::string l;
    if(f){
        std::ostringstream str;
        str<<f.rdbuf(); 
        l=str.str();
    }
    std::cout<<check(l);
}