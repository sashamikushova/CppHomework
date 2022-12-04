#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 255
typedef struct Mountains{
    char name[MAX_NAME_LEN];
    int height;
}Mountain;
void printMount(const Mountain* mnt){
    printf("Hora %s : %d meters \n", mnt->name, mnt->height);
}
void inputMount(Mountain* mnt){
    printf("Mount name:");
    scanf("%s", mnt->name);
    printf("Mount height:");
    scanf("%d", &(mnt->height));
}
void maxMountName(const Mountain* mas, int n){
    int maxH=mas[0].height;
    int maxN=0;
    for(int i=1;i<n;i++){
        if (mas[i].height>maxH){
            maxH=mas[i].height;
            maxN=i;
        }
    }
    printf("Max mountain is %s", mas[maxN].name);
}
int heightByName(const char* mname, const Mountain* mas, int n){
    int ind=-1;
    for(int i=0;i<n;i++){
        if (strcmp(mas[i].name, mname)==0){
            ind=i;
        }
    }
    if (ind==1){
        printf("Ain't no mountain!\n");
    }
    else printf("Height of %s mountain is: %d", mname, n);
    return ind;
}