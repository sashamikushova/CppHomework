//8.8 8.19
#include <stdio.h>
#include <stdbool.h>
#include <float.h>
#define M 50
double max(double x, double y){
    return (x>=y?x:y);
}
bool task8_8(double matr[][M], double newm[][M],size_t n,size_t m){
    double maximum=-DBL_MAX;
    int max_index=0;
    for(size_t j=0;j<m;j++){
        for(size_t i=0;i<n;i++){
        if (maximum<matr[i][j]){
            max_index=i;
            maximum=matr[i][j];
        }
        }
        maximum=-DBL_MAX;
        for(size_t k=0;k<n;k++){
                newm[k][max_index]=(double)(matr[k][j]);
          }
        
        max_index=0;

    }
    return true;
}
void printMatrix3(double matr[][M],size_t n,size_t m){
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<m;j++){
        printf("%lf ",matr[i][j]);
        }
        printf("\n");
    }
}
void task8_19(double matr[][M],size_t n,size_t m){
    double maximum=matr[0][0];
    int max_index=0;
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<m;j++){
            if (maximum!=max(maximum,matr[i][j])){
                max_index=i;
                maximum=matr[i][j];
            }
        }       
    }
    double maximum2=maximum;
    bool znak=false;
    for(size_t k=0;k<n;k++){
            if (maximum2!=max(maximum2,matr[k][max_index])){
                maximum=-DBL_MAX;
                znak=false;
            } 
            else znak=true;     
    }
    if (znak)(printf("naybilshyy u svoyemu ryadku ta stovpci: %lf",maximum2));

}
int main(){
    size_t n=4,m=4;
    double matr[][M]={{100,0,0,0},{0,0,0,100},{0,100,0,0},{0,0,100,0}};
    double newm[][M]={};
    task8_8(matr, newm, n,m);
    printMatrix3(newm,n,m);
    task8_19(matr,n,m);
}