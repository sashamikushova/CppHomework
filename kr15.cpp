#include <iostream>
#include <cmath>
#include <strstream>
#include <fstream>

using namespace std;
void task1(double x, double y){
    cin>>x>>y;
    cout.precision(10);
    cout<<pow(x,y)<<"\n";
    cout<<scientific<<pow(x,y);
}
void task2(){
    char buf[10];
    long long unsigned suma=0;
    std::cin.getline(buf,10);
    char* err[100];
    suma+=strtoull(buf,err,10);
    std::cout<<suma;
}
void task3(){
    int n;
    n=7;
    cout.precision(3);
    cout.fill(' ');
    double x;
    for(x=1.0;x<=n;x++){
        cout<<"++++++";
    }
    cout<<endl;
    cout.width(3);
    cout<<1<<" ";
    for(x=2.0;x<=n;x++){
        cout.width(5);
        cout<<x<<" ";
    }
    cout<<endl;
    for(x=1.0;x<=n;x++){
        cout<<"++++++";
    }
    cout<<endl;
    cout.width(3);
    cout<<1.0<<" ";
    for(x=2.0;x<=n;x++){
        cout.width(5);
        cout<<sqrt(x)<<" ";
    }
    cout<<endl;
    for(x=1.0;x<=n;x++){
        cout<<"++++++";
    }
    cout<<endl;
}

void task4(){
    int n;
    cout<<"n=";
    cin>>n;
    int* m=new int[n];
    for(int i=0;i<n;i++){
        cin>>m[i];

    }
    const char* fname="file1.txt";
    fstream f(fname);
    if(f.bad()){
        cout<<" file "<<fname<<"could not be opened!\n";
        delete [] m;
        return;
    }
    double tmp;
    int i=0;
    int* x=new int[n];
    while(f>>tmp){
        x[i++]=tmp;
        if(i>n) break;


    }
    if(i!=n){
        cout<<" file "<<fname<<" has "<<i<<"data";
        f.close();
        delete[] x;
        delete[] m;
        return;
    }
    f.close();
    fstream g("file2.txt");
    for(int i=0;i<n;i++){
        g<<pow(x[i],m[i])<<" ";
    }
    g.close();
    delete[] x;
        delete[] m;

}

void task5(){
    char fname[255];
    cout<<"file name:";
    cin>>fname;
    fstream f;
    f.open(fname,ios_base::in);
    if(!f){
        return;
    }
    long long unsigned mas[2000];
    int i=0;
    long long unsigned x;
    while(f>>x){
        mas[i]=x;
        i++;
    }
    f.close();
    for(int j=i-1;j>0;j--){
        long double tmp=sqrt(mas[j]);
        cout.precision(4);
        cout<<fixed<<tmp<<"\n";
    }
}
int main(){
   task3();
}