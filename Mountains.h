#ifndef __Mountain__
#define __Mountain__
#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LEN 255
typedef struct Mountain{
    char name[MAX_NAME_LEN];
    int height;
}Mountain;
void printMount(const Mountain* mnt);
int inputMount(Mountain* mnt);
void maxMountName(const Mountain* mas, int n);
int heightByName(const char* mname, const Mountain* mas, int n);
#endif