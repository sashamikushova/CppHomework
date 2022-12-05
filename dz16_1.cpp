//12.20
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n=4;
    double max_work=0;
    fstream myfile("dz16_1text.txt",ios::in);
    int x1,y1;
    for(int i=0; i<n;i++){
        int x,y;
        double m;
        char duzhka;
        myfile>>duzhka>>x>>duzhka>>y>>duzhka>>m>>duzhka>>duzhka;
        if((x+y)*m>max_work){
            max_work=(x+y)*m;
            x1=x;
            y1=y;
        }
    }
    printf("max vazhil syly v tochci: (%d,%d)",x1,y1);
}
