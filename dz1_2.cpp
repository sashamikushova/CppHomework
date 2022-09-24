//1.24
#include <stdio.h> 
#include <math.h>

int main(){
    int n, m;
    printf("Enter n m:\n");
    scanf("%d %d", &n, &m);
    printf("%*d\n", n, m);
    printf("%*d\n", 2*n, m*m);
    return 0;
}