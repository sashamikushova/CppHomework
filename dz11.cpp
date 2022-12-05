#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
typedef struct {
    int rozmir; 
    double* v; 
} Vector;
Vector inputVect(){
    Vector vector;
    int znak=1;
    while(znak==1){
        printf("Enter number of elements: ");
        scanf("%u", &vector.rozmir);
        if(vector.rozmir<0){
            printf("Incorrect vector size!\n");
        } 
        else {
            znak=0;
            for(int i=0;i<vector.rozmir;i++){
                printf("vector[%d]=",i);
                scanf("%lf",&(vector.v[i]));
            }
        }
    }
    return vector;
}

void outputVect(Vector vector){
    if (vector.rozmir==1){
        printf("(%lf)",vector.v[0]);
    }
    else{
        printf("(");
        int i=0;
        for (;i<vector.rozmir-1;i++){
            printf("%lf, ",vector.v[i]);
        }
        printf("%lf",vector.v[i]);
        printf(")");
    }
    
}

int main(){
    Vector v;
    v=inputVect();
    outputVect(v);
}