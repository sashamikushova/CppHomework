#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date;
typedef struct {
int row; 
char column; 
} Chess;
typedef struct {
int x1;
int x2;
int y1;
int y2;
} Rectangle;
typedef struct {
unsigned int deg;
double *coeffs;
} Polynome;
int funfunction(int year, int month) {
    if(month>=1 && month<=12){
        int month_since_January_length[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month==2) {
    if(year%100==0){
        if(year%400==0){
            return month_since_January_length[1]+1;
        }
        else {
            return month_since_January_length[1];
        }
    }
        if(year%4==0){
            return month_since_January_length[1]+1;
        }
    }
        return month_since_January_length[month-1];
    }
    return 0;
}

bool valid_date(int day, int month, int year) {
    if(year<1||year>9999) {
        return false;
    }
    return month>=1 && month<= 12 && day >= 1 && day <=funfunction(year, month);
}

Date inputDate() {
    Date d;
    int enter=1;
    while(enter==1){
        printf("Enter date: ");
        scanf("%d.%d.%d", &d.day, &d.month, &d.year);
        if(valid_date(d.day, d.month, d.year)==true){
            enter = 0;
        } else{
            printf("Incorrect date!\n");
        }
    }
    return d;
}
Chess inputChess(){
    Chess pos;
    int znak=1;
    while(znak==1){
        printf("Enter pos:");
        scanf(" %c %d", &pos.column, &pos.row);
        if((pos.row<1)||(pos.row>8)){
            printf("Incorrect position\n");
        } else{
            znak=0;
        }
    }
    return pos;
}
Rectangle inputRectangle(){
    Rectangle rect;
    int znak=1;
    while(znak==1){
        printf("Enter x1 y1 x2 y2: ");
        scanf("%d %d %d %d", &rect.x1, &rect.y1, &rect.x2, &rect.y2);
        if(rect.x1==rect.x2 || rect.y1==rect.y2){
            printf("Incorrect position\n");
        } 
        else {
            znak=0;
        }
    }
    return rect;
}

Polynome inputPolynome(){
    Polynome pol;
    double eps=0.0000001;
    int znak=1;
    while(znak==1){
        printf("Enter degree: ");
        scanf("%u", &pol.deg);
        if(pol.deg<0){
            printf("Incorrect input\n");
        } 
        else {
            pol.coeffs=(double *) realloc(pol.coeffs, pol.deg * sizeof(double));
            for(unsigned i=0; i<=pol.deg; i++){
                printf("Coefficient deg %u: ", i);
                scanf("%lf", &pol.coeffs[i]);
            }
            if(pol.coeffs[pol.deg]<eps){
                printf("Value of the greatest degree isn't 0!\n");
            } 
            else{
                znak=0;
            }
        }
    }
    return pol;
}
void outputDate(Date d){
    printf("%u.%u.%u\n", d.day, d.month, d.year);
}
void outputChess(Chess pos){
    printf("%c%u\n", pos.column, pos.row);
}
void outputRectangle(Rectangle rect){
    printf("A = (%d, %d), B = (%d, %d), C = (%d, %d), D = (%d, %d)", rect.x1, rect.y1, rect.x1, rect.y2, rect.x2, rect.y2, rect.x2, rect.y1);
}
void outputPolynome(Polynome poly){
    for(unsigned int i = 0; i < poly.deg; i++){
        printf("%.2lf*x^%u + ", poly.coeffs[poly.deg - i], poly.deg - i);
    }
    printf("%.2lf", poly.coeffs[0]);
}
bool canQueenGo(Chess queenPos, Chess targetPos){
    if(queenPos.row==targetPos.row||queenPos.column==targetPos.column||abs(queenPos.row - targetPos.row)==abs(queenPos.column - targetPos.column)){
        return true;
    } else {
        return false;
    }
}
Date nextDay(Date d){
    Date d2;
    if(!valid_date(d.day+1, d.month, d.year)){
        if(!valid_date(1, d.month+1, d.year)){
            if(!valid_date(1, 1, d.year+1)){
                printf("That is the last day!\n");
                return d;
            } else {
                d2.day=1;
                d2.month=1;
                d2.year=d.year + 1;
            }
        } else {
            d2.day=1;
            d2.month=d.month+1;
            d2.year=d.year;   
        }
    } else {
        d2.day=d.day + 1;
        d2.month=d.month;
        d2.year=d.year;   
    }
    return d2;
}
void getDayOfWeek(Date d){
    printf("%d-th day", (d.day + 2 * d.month + 3 * (d.month + 1) / 5 + d.year + d.year / 4 - d.year / 100 + d.year / 400 + 1) % 7);
}
int main(){

    // task 10_1
    Chess pos;
    pos = inputChess();
    outputChess(pos);
    Date d;
    d = inputDate();
    outputDate(d);
    Rectangle rect;
    rect = inputRectangle();
    outputRectangle(rect);
    Polynome pol;
    pol=inputPolynome();
    outputPolynome(pol);
    Chess pos1, pos2;
    pos1=inputChess();
    pos2=inputChess();
    if(canQueenGo(pos1, pos2) == true){
        printf("She can!");
    } else {
        printf("She can't!");
    }
    d=inputDate();
    Date d2=nextDay(d);
    outputDate(d2);
    getDayOfWeek(d);
}