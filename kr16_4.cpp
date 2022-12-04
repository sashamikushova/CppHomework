#include <iostream>
#include <string>
void findDoubles(std::string str, int n, char del){
    int start=0;
    for(int i=0, j=0; i<n, j<str.length(); j++){
        if(str[j]==del){
            std::string a;
            a.append(str, start, j-start);
            start=j+1;
            i++;
            std::cout<<stof(a) << "\n";
        }
    }
}
int main(){
    std::string str="12312.12,123.12312,643.234,";
    findDoubles(str,4,',');
}