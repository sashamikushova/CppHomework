#include <stdio.h>
#include <math.h>
#define N 5
#define N1 10
double sumEuler(double mas[], size_t n){
    double res=0;
    for(size_t i=0;i<n;i++){
        if(mas[i]>M_E){
            res+=mas[i];
        }
    }
    return res;

}
void task7_5(int arr[]){
    int i=-1;
    do{
        i++;
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
        
    } while (arr[i]!=0);
}
void task7_4(int a[], size_t n){
    int max=a[0];
    for(size_t i=0;i<n;i++){
        if (a[i]>=a[0]) max=a[i];
    }
    printf("largest value of an element is %d", max);
}

void parnepar(unsigned * m, int n){
    unsigned odds=0, evens=0;
    for(int i=0;i<n;i++){
        if(m[i]%2==0){
            evens++;
        }
        else odds++;

    }
    printf("%u odd numbers %d even numbers\n",odds,evens);
}
int * task7_a(const int size) {
    static int array[20];
    for (int i = 0; i < size; i++) {
        printf("%d element: ", i+1);
        scanf("%d", &array[i]);
    }
    return array;
}
void task7_b(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Array[%d] = %d\n", i, array[i]);
    }
}
int * task7_c(int array1[], int array2[], const int size) {
    static int array3[20];   
    for (int i = 0; i < size; i++) {
        array3[i] = array1[i] + array2[i];
    }
    return array3;
}
int task7_d(int array1[], int array2[], const int size) {
    int product = 0;
    for (int i = 0; i < size; i++) {
        product += array1[i]*array2[i];
    }
    return product;
}
int main(){
    int mas[N]={1,2,4,44,3};
    double a;
    printf("a=");
    scanf("%lf",&a);
    int cnt=0;
    for(int i=0;i<N;i++){
        if(mas[i]<a) cnt++;
    }
    printf("there are %d elements less than %lf\n",cnt,a);
    int mas2[]={5,112,4,3};
    size_t M=sizeof(mas2)/sizeof(mas[0]);
    for(int i=M-1;i>=0;i--){
        printf("a[%d]=%d\n",i,mas2[i]);
    }
    double mas3[N1];
    for(int i=0;i<N1;i++){
        printf("a[%d]=",i);
        scanf("%lf",&mas3[i]);
    }
    double s1=sumEuler(mas3,N1);
    printf("s=%lf",s1);
    int arr[]={};
    size_t n;
    task7_5(arr);
    int arr2[]={};
    int *array1, *array2, *array3;
    int s=6;
    array1=task7_a(s);
    array2=task7_a(s);
    array3=task7_c(array1, array2, s);
    task7_b(array3,s);
    printf("mult=%d", task7_d(array1, array2, s));
    return 0;
}