#include <stdio.h> 
#include <math.h>
void task4_27b(){
    double eps, p=2;
    printf("tochnist':\n");
    scanf("%lf", &eps);
    double pinadva=2, realpi=3.14159265359, chys=2, znam=1, znak=1;
    do
	{
        if (znak==1){
            pinadva*=chys/znam;
            znak=0;
        }
        else {
                znam+=2;
                pinadva*=chys/znam;
                chys+=2;
                znak=1;
        }
    }
	while(abs(realpi-pinadva)>eps);
    printf("pi=%lf", pinadva);
}

int main(){
    task4_27b();
}