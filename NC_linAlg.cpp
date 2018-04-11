#include <iostream>

using std::cout;
using std::endl;

/*a y m son matrices 
b "# de filas de a
c # de columas de a y filas de m
n # de columnas de m
g resultado de multiplicacion
*/
double** matrix_product(double **a, int b, int c,double **m,int n){
double** g= new double*[b];
for (int i=0;i<b;i++){
g[i]= new double*[n];
}

for(int h=0;h<c;h++){

for(int i=0;i<b;i++){
for(int j=0;j<n;j++){
/*
producto punto
*/
g[i][j]+= a[i][h]*b[h][j];
}
}
}
}




/*
g matriz creada
M filas de la matriz creada
N columnas de la matriz creada
*/

double** get matrix(int M, int N){
double** g= new double*[M];
for (int i=0;i<b;i++){
g[i]= new double*[N];
}
cout<<"las dimensiones de la matriz seran"<<" "<<M<<"x "<<N<<endl;
for(int h=0;h<M;h++){
for (int i=0;i<N;i++){
cout<<"Ingrese"<<h<<" "<<j<<"esimo- valor"<<endl;
cin>>g[h][i];
}
}
cout<<"La matriz ingresada es"<<g<<endl;

}
