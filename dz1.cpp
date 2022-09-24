//1.18
#include <stdio.h> 
#include <math.h>

int main(){
    char x1, x2, x3, x4, x5, x6, x7, x8, x9;
    printf("Enter hrestyky nolyky position: {X,O,... }");
    scanf("{%c,%c,%c,%c,%c,%c,%c,%c,%c}", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9);
    printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c", x1, x2, x3, x4, x5, x6, x7, x8, x9);
    return 0;
}