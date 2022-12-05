//11.9a
#include <stdio.h>
#include <stdlib.h>
#define N 5
void writefile(FILE* out, char fname[11], int n, int c[]){
    out=fopen(fname,"wb");
    for(int i=0;i<n;i++){
        fwrite(&c[i],sizeof(int),1,out); 
    }
    for(int i=0;i<n;i++){
        printf("*%d*\n",c[i]);
    }
    fclose(out);
}
int main(){
    int kilkistb=0,kilkistm=0;
    int n1, n2;
    printf("enter number of cyfry in f and g:");
    scanf(" %d %d",&n1,&n2);
    if (n1!=n2) {
        printf("numbers of cyfry in f and g must be equal:");
        return 1;
    } 
    char f[11]="cyfry1.bin";
    char g[11]="cyfry2.bin";
    int c1[]={};
    int c2[]={};
    for(int i=0;i<n1;i++){
        printf("pershyy file cyfra[%d]:",i);
        scanf(" %d",&c1[i]);   
        if (c1[i]>=0){
            kilkistb++;
        }
        else kilkistm++;
    }
    FILE* out1;
    writefile(out1,f,n1,c1);


for(int i=0;i<n1;i++){
        printf("druhyy file cyfra[%d]:",i);
        scanf(" %d ",&c2[i]);
        if (c2[i]>=0) kilkistb++;
        else kilkistm++;
    }
    if (kilkistb!=kilkistm) return -1;

    FILE* out2;
    writefile(out2,g,n2,c2);

    FILE* in1;
    int r1[]={};
    in1=fopen(f,"rb");
    int k;
    k=fread(r1,sizeof(int),N,in1);
    printf("zchytano %d chysel",k);
    for(int i=0;i<n1;i++){
        printf("%d\n",r1[i]);
    }
    fclose(in1);


    FILE* in2;
    int r2[]={};
    in2=fopen(g,"rb");
    k=fread(r2,sizeof(int),N,in2);
    printf("zchytano %d chysel",k);
    for(int i=0;i<n1;i++){
        printf("%d\n",r2[i]);
    }
    fclose(in2);

    FILE* out3;
    char h[]="cyfry3.bin";
    int i=0,j=1,d=0;
    int w3[]={};
    while (d<n1){
        printf("%d\n",r1[d]);
        if (r1[d]>=0){
            w3[i]=r1[d];
            d++;
            i+=2;
            
    }
    else{
        w3[j]=r1[d];
        d++;
        j+=2;
        
    }
    }
    d=0;
    while (d<n1){
        printf("%d\n",r2[d]);
        if ((int)r2[d]>=0){
            w3[i]=r2[d];
            d++;
            i+=2;
            
    }
        else{
            w3[j]=r2[d];
            d++;
            j+=2;
            
        }
    }
    for(i=0;i<2*n1;i++){
        printf("%d ",w3[i]);
    }
    writefile(out3,h,2*n1,w3);
    return 0;
}