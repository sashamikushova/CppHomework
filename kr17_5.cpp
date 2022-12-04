#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
void create(int n){
    std::ofstream File("example.txt");
    for(int i=0;i<n;i++){
        std::string temp;
        std::cout<<"Enter surname, year, group, marks: ";
        std::cin>>temp; 
        File<<temp<<"\n";
    }
    File.close();
}
void WorstMark(std::string filename){
    std::ifstream File(filename);
    std::string temp,minsurname;
    float minscore = 10;
    while (getline (File, temp)) {
        int start=0,cnt=0;
        float tempscore=0;
        std::string c, tempsurname;
        for(int j=0; j<=temp.length(); j++){
            if(temp[j]==',' || j==temp.length()){
                c=temp.substr(start,j-start); 
                start=j+1;
                cnt++;
                if(cnt==1){
                    tempsurname = c;
                }
                if(cnt>3){
                    tempscore += stoi(c);
                }
            }
        }   
        tempscore/=cnt-3; 
        if(tempscore<minscore){
            minscore=tempscore;
            minsurname=tempsurname;
        }
    }
    std::cout<<minsurname<< " " << minscore;
    File.close();
}
int main(){
    int n=8;
    create(n);
    WorstMark("kr17.txt");
}