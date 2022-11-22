#include <stdio.h>
#include <stdbool.h>
#define N 3
#define M 3
#define S 10
void printMatrix(int a[][N],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<N;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
}
}

int replace1(int a[M][N],int n, int m){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if ((a[i][j])==m){
                a[i][j]=n;
                return 1;
            }
        }
    }
    return 0;
}
void task1(){
    int m1[M][N]={{1,2,3},{4,5,6},{7,8,9}};
    int n, m;
    printf("n,m: ");
    scanf("%d %d",&n,&m);
    replace1(m1,n,m);
    printMatrix(m1,M);


}
int replace2(float matr[M][N],unsigned n, unsigned m, float a){
    if(n>M||m>=N){
        return -1;
    }
    matr[n][m]=a;
    return 0;
}
void printMatrix2(float a[][N],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<N;j++){
        printf("%g ",a[i][j]);
        }
        printf("\n");
}
}
void task2(){
    float  m1[M][N]={{1.0f,2,3},
                    {4,5,6},
                    {7,8,9}};
    unsigned n,m;
    printf("n,m: ");
    scanf("%u %u",&n,&m);
    float a;
    printf("a=");
    scanf("%f",&a);
    replace2(m1,n,m,a);
    printMatrix2(m1,M);
}
#define N1 20
#define M1 20
bool inputMatrix3(double matr[N1][M1],size_t n,size_t m){
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<m;j++){
        printf("a[%zu][%zu]=",i,j);
        int r=scanf("%lf",&matr[i][j]);
        if(r!=1) return false;
        }
    }
    return true;
}
void printMatrix3(const double matr[N1][M1],size_t n,size_t m){
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<m;j++){
        printf("%lf ",matr[i][j]);
        }
        printf("\n");
    }
}
int task3(){
    double matr[N1][M1];
    size_t n,m;
    printf("n,m:");
    scanf("%zu %zu",&n,&m);
    if(n>=N1||m>=M1) printf("Incorrect sizes %zu %zu", n,m);
    bool r=inputMatrix3(matr,n,m);
    if(!r){
        printf("input failed");
        return -2;
    }
    printMatrix3(matr,n,m);
    return 1;
}

void task5(){
    int n;
    printf("Enter N = ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    double temp;
    for(int i = 0; i < n; i++){
        for(int j = i; j<n; j++){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        printf("\n");
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
}
}
void task6(){
    int Z, H, K;
    printf("Enter M = ");
    scanf("%d", &Z);
    printf("Enter N = ");
    scanf("%d", &H);
    printf("Enter K = ");
    scanf("%d", &K);
    double arr[Z][H];
    for(int i = 0; i <Z; i++){
        for(int j = 0; j <H; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
        printf("\n");
    }
    double sum = 0;
    for(int i = 0; i <Z; i++){
        if(i - K >= 0 & i - K<H){
            sum += arr[i][i-K];
        }
    }
    printf("sum=%lf", sum);
}
int task7(){
    double a[S][S], x[S], ratio, det=1;
	int i,j,k,n;
	printf("Enter Order of Matrix: ");
	scanf("%d", &n);
	printf("\nEnter Coefficients of Matrix: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			   printf("a[%d][%d]=",i,j);
			   scanf("%lf", &a[i][j]);
		  }
	 }
	 for(i=0; i<n; i++){
		  if(a[i][i]==0.0){
			   printf("Mathematical Error!");
			   return -1;
		  }
		  for(j=i+1; j<n; j++){
			   ratio=a[j][i]/a[i][i];
			   for(k=0; k<n; k++){
			  		a[j][k]=a[j][k]-ratio*a[i][k];
			   }
		  }
	 }
	 for(i=0;i<n;i++){
         det=det*a[i][i];
     }
	 printf("\nDeterminant of given matrix is: %0.3lf", det);
	 return 0;
}
int main(){
    task1();
}