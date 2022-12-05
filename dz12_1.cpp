#include <stdio.h>

typedef struct Predmet{
    double Mass;
    double Volume;
} Predmet;

int main(){
    unsigned int n = 3;
    Predmet a1, a2, a3;
    a1.Mass=55;
    a1.Volume=33;
    a2.Mass=44;
    a2.Volume=226;
    a3.Mass=33;
    a3.Volume=0.29;
    Predmet v[3]={a1, a2, a3};
    Predmet min_m;
    min_m.Mass=a1.Mass;
    for(unsigned int i = 0; i<n; i++){
            if(v[i].Mass<min_m.Mass){
                min_m.Mass=v[i].Mass;
        }
    }
    printf("min mass is: %lf",min_m.Mass);
}