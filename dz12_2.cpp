#include <stdio.h>
#include <math.h>
//11.7д
int main(){
    unsigned int n;
    printf("Enter n: ");
    scanf("%u", &n);
    double arr[n];
    for(unsigned int i = 0; i < n; i++){
        printf("arr[%u] = ", i);
        scanf("%lf", &arr[i]);
    }
    FILE *f = fopen("dz12.bin", "wb");
    fwrite(&arr, sizeof(double), n, f);
    fclose(f);
    FILE *f1 = fopen("dz12.bin", "rb");
    double arr2[n];
    fread(&arr2, sizeof(double), n, f1);
    double max=0;
    for(unsigned int i = 0; i < n; i++){
        printf("%lf",(double)(arr[i]));
        if(fabs((double)(arr[i]))>max){
            max=(double)arr[i];
        }
    }
    printf("%lf",max);
}