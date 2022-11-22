#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int InputArray(double* arr,int n){
    for(int i=0;i<n;i++){
        printf("a[%d]=",i);
        int res=scanf("%lf",&arr[i]);
        if (res!=1) return 1;
    }
    return n;
}
double sum_sqr(double* arr, int n){
    double res=0;
    for(int i=0;i<n;i++){
        res+=arr[i]*arr[i];
    }
    return res;
}
void task1(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double * arr=(double*) malloc(n*sizeof(double));
    if (!arr){
        printf("No allocated memory");
    }
    int k=InputArray(arr,n);
    printf("Sum of sqr=%lf", sum_sqr(arr,k));
    free(arr);
}
int InputArray2(int* arr,const int n){
    int k=0;
    do{
        printf("a[%d]=",k);
        int res=scanf("%d",&arr[k]);
        if (res!=1) return k;
        if(arr[k]==0) break;
        k++;
    }while(1);
    return  k;
}
bool isSqr(int x){
    int m=(int) sqrt(x +0.5);
    return m*m == x;
}
bool isCube(int x){
    int m=(int) pow(x +0.5, 1.0/3);
    return m*m*m==x;
}
void showSqrCubes(const int* arr, int n){
    int cntSqr=0,cntCubes=0;
    for (int i=0; i<n;i++){
        if(isSqr(arr[i])){
            cntSqr++;
        }
        if(isCube(arr[i])){
            cntCubes++;
        }
        printf("nuber of sqr %d, of cubes %d", cntSqr, cntSqr);
    }
}
int task2(){
    const int N=100;
    int* arr=(int*)calloc(N,sizeof(int));
    if(arr==NULL) return -1;
    int n=InputArray2(arr,N);
    showSqrCubes(arr,n);
    free(arr);
    return 0;
}

int InputArray3(int* arr,int n){
    int k=0;
    int m=n;
    do{
        printf("a[%d]=",k);
        int res=scanf("%d",&arr[k]);
        if (res!=1) return k;
        if(arr[k]==0) break;
        k++;
        if(m>n){
            arr=(int*)realloc(arr,m*2*sizeof(int));
            m=m*2;
        }
    }while(1);
    return  k;
}
double* InputVect(int n){
    double * v=(double*) malloc(n*sizeof(*v));
    for(int i=0;i<n;i++){
        printf("v[%d]=",i);
        int res=scanf("%lf",&v[i]);
        if (res!=1) return NULL;

    }
    return v;

    
}
void showVect(const double* v, int n){
    printf("(");
    for(int i=0;i<n;i++){
        printf("%lf,",v[i]);
    }
    printf(")\n");
}
double* sub(const double *v1, const double* v2, int n){
    double * v=(double*)calloc(n,sizeof(*v));
    for(int i=0;i<n;i++){
        v[i]=v1[i]-v2[i];

    }
    return v;
}
void deleteVect(double* v){
    free(v);
}
int task3(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double* v1=InputVect(n);
    double* v2=InputVect(n);
    double* v3=sub(v1,v2,n);
    showVect(v3,n);
    deleteVect(v1);
    deleteVect(v2);
    deleteVect(v3);
    return 0;
}
double ** alloc_memory(int n){
    double **arr = (double **)malloc(n*sizeof(double*));
    for(int i=0;i<n;i++) arr[i]=(double*)calloc(n,sizeof(double));
    return arr;
}
void free_memory(double **arr, int n){
    for(int i=0;i<n;i++) free(arr[i]);
    free(arr);
}
double ** matr_mult(double **arr, double **arr_2,int n){
    double **new_arr;
    new_arr=alloc_memory(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                new_arr[i][j]+=arr[i][k]*arr_2[k][j];

            }
        }
    }
    return new_arr;

}
void print_arr(double **arr, int n){
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%lf", arr[i][j]);
        }
        printf("\n");

    }
}
int input_matr(double **arr, int n){
    for(int i=0;i<n;i++){
        printf("Enter %d values: ", n);
        for(int j=0;j<n;j++){
            scanf("%lf", &arr[i][j]);
        }
    }
    return 0;
}
int task4(){
    int n; double **arr, **arr_2, **new_arr;
    printf("enter n: ");
    scanf("%d",&n);
    arr=alloc_memory(n);
    arr_2=alloc_memory(n);
    if(!arr||arr_2){
        printf("memory fail");
        return -1;
    }
    printf("first matrix\n");
    input_matr(arr,n);
    printf("second matrix\n");
    input_matr(arr_2,n);
    print_arr(arr,n);
    print_arr(arr_2,n);
    new_arr=matr_mult(arr,arr_2,n);
    print_arr(new_arr,n);
    free_memory(arr,n);
    free_memory(arr_2,n);
    free_memory(new_arr,n);
    return 0;
}


int main(){
    task1();
    task2();
    task3();
    task4();
}