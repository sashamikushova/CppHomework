#include <iostream>
#include <string>

void split(std::string str, int n, char del){
    int start=0;
    for(int i=0, j=0; i<n && j<str.length(); j++){
        if(str[j]==del){
            std::string a;
            a.append(str, start, j-start);
            start=j+1;
            i++;
            std::cout<< a <<"\n";
        }
    }
}

int main(){
    std::string str="12312.12,123.12312,643.234,12312.123,";
    split(str, 3, ',');
}