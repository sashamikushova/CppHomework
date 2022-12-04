//11.2-11.4
#include <stdio.h>
#include <math.h>
int main(){
    unsigned int n;
    double a;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter n: ");
    scanf("%u", &n);
    double arr[n];
    for(unsigned int i = 0; i < n; i++){
        printf("arr[%u] = ", i);
        scanf("%lf", &arr[i]);
    }
    FILE *f=fopen("f.bin", "wb");
    fwrite(&arr, sizeof(double), n, f);
    fclose(f);
    FILE *f1=fopen("f.bin", "rb");
    double byte[n], arr2[n], arr3[n];
    unsigned int j=0, k=0;
    fread(&byte, sizeof(double), n, f1);
    for(unsigned int i = 0; i < n; i++){
        if(fabs(byte[i])<a){
            arr2[j]=byte[i];
            j++;
        } 
        else {
            arr3[k]=byte[i];
            k++;
        }
    }
    FILE *g = fopen("g.bin", "wb");
    fwrite(&arr2, sizeof(double), j, g);
    fclose(g);
    FILE *f2 = fopen("f.bin", "wb");
    fwrite(&arr3, sizeof(double), k, f2);
    fclose(f2);
    //2
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter n: ");
    scanf("%u", &n);
    for(unsigned int i = 0; i < n; i++){
        printf("arr[%u] = ", i);
        scanf("%lf", &arr[i]);
    }
    f=fopen("f.bin", "wb");
    fwrite(&arr, sizeof(double), n, f);
    fclose(f);
    f1=fopen("f.bin", "rb");
    fread(&byte, sizeof(double), n, f1);
    for(unsigned int i = 0; i < n; i++){
        if(fabs(byte[i]) < a){
            arr2[j]=byte[i];
            j++;
        } else {
            arr3[k]=byte[i];
            k++;
        }
    }
    g = fopen("g.bin", "wb");
    fwrite(&arr2, sizeof(double), j, g);
    fclose(g);
    f2 = fopen("f.bin", "wb");
    fwrite(&arr3, sizeof(double), k, f2);
    fclose(f2);
    //3
    int* arr4;
    arr4=(int*)calloc(1, sizeof(int));
    unsigned int i = 0;
    printf("arr[%u] = ", i);
    int t;
    scanf("%d", &arr4[0]);
    while(t!=0){
        arr4=realloc(arr4, (sizeof(int))*(i+1));
        arr3[i] = t;
        i++;
        printf("\narr[%u]=", i);
        scanf("%d", &t);
    }
    printf("%d", arr4[i-1]);
    f=fopen("f.bin", "wb");
    
    fwrite(&arr4, sizeof(double), i, f);
    fclose(f);
    f1=fopen("f.bin", "rb");
    fread(&byte, sizeof(double), i, f1);
    for(unsigned int k=0; k<i; k++){
        if(byte[k]%2==0){
            arr2[j] = byte[k];
            j++;
        }
    }
    g=fopen("g.bin", "wb");
    fwrite(&arr2, sizeof(double), i, g);
    fclose(g);
}