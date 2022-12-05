//11_12g
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
typedef struct Ihrashka{ 
    char name[20];
    int price;
    int age;
}Ihrashka;
int readTextFile(const char* fname, Ihrashka* mas){ 
    int price; int age; char name[20]; 
    int i=0;
    FILE* f = fopen(fname, "rt"); 
    if(f==NULL) return EXIT_FAILURE; 
    do{ 
        fscanf(f,"%s %d %d", name, &price, &age); 
        mas[i].age = age; 
        strcpy(mas[i].name,name);
        mas[i].price=price;
        strcpy(mas[i].name , name); 
        i++;
    }while(!feof(f)); 
    fclose(f); 
    return i-1;
} 

int main(int argc, char **argv){ 
    const char fname[] = "dz12text.txt"; 
    char search[20]="doll";
    Ihrashka ihr[50]; 
    int k = readTextFile(fname, ihr); 
    int i=0, maxprice=0, maxindex=0;
    for(Ihrashka* strt=ihr;strt<&ihr[k]; ++strt){ 
        if (strcmp(search,strt->name)==0 && strt->price>maxprice){
            maxprice=strt->price;
            maxindex=i;
        }
        fprintf(stdout,"\n Ihrashka[%d]= %d %d %s", i++,strt->price, (int)strt->age, strt->name);
    }
    printf("\n%s's highest price is %d", search, maxprice);
    
}
