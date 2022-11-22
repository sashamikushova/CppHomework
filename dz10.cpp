//9.9p 9.5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
double ** alloc_memory(int n, int m){
    double **arr = (double **)malloc(n*sizeof(double*));
    for(int i=0;i<n;i++) arr[i]=(double*)calloc(m,sizeof(double));
    return arr;
}
void free_memory(double **arr, int n, int m){
    for(int i=0;i<m;i++) free(arr[i]);
    free(arr);
}
void print_arr(double **arr, int n, int m){
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}
int input_matr(double **arr, int n, int m){
    for(int i=0;i<n;i++){
        printf("Enter %d values: ", m);
        for(int j=0;j<m;j++){
            scanf("%lf", &arr[i][j]);
        }
    }
    return 0;
}
void remove_column(double ** arr, int col, int n, int m){
  for(int i=0;i<n; i++)
  {
    while(col<m)
    {
      arr[i][col]=arr[i][col+1];
      col++;
    }
  arr[i] = (double*)realloc(arr[i], sizeof(double)*m);
  }
}
void find_column(double **arr, int n, int m){
    int znak=1;
    int new_col=m;
    for(int j=0;j<m;j++){    
        for(int i=0;i<n;i++){
            if(arr[i][j]>1) znak=-1;
        }
        if (znak==1) {
            remove_column(arr, j, n, m);
            new_col--;
        }
        znak=1;
    }
    print_arr(arr,n,new_col);
    free_memory(arr,n, new_col);
}

int task9_9p(){
    int n,m; double **arr;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter m: ");
    scanf("%d",&m);
    arr=alloc_memory(n,m);
    printf("first matrix\n");
    input_matr(arr,n,m);
    print_arr(arr,n,m);
    find_column(arr,n,m);
    return 0;
}
void determinant(double ** a, int n){
    double ratio, det=1;
    int i,j,k;
	 for(i=0;i<n;i++){
		  for(j=i+1;j< n;j++)
		  {
			   ratio=a[j][i]/a[i][i];

			   for(k=0;k<n;k++)
			   {
			  		a[j][k]=a[j][k]-ratio*a[i][k];
			   }
		  }
	 }
	 for(i=0;i<n;i++){
         det=det*a[i][i];
     }
	 printf("Vyznachnyk: %lf", det);
}

void task9_5(){
    int n; double **arr;
    printf("enter poryadok: ");
    scanf("%d",&n);
    arr=alloc_memory(n,n);
    input_matr(arr,n,n);
    determinant(arr,n);
    free_memory(arr,n,n);
    
}
int main(){
    task9_9p();
    task9_5();
}