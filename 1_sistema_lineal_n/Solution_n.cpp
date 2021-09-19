//create a program for the method of Gauss-Jordan
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void convert_vector(double matrix[100][100], int, int, int, double); //remember is for a matrix nxn
double factorizacion_LU(double matrix[100][100], int, int);
double determinante(double matrix[100][100], int, int);
void change_rows(double matrix[100][100], int, int, int);
//matriz[Rj][i] != 0 for maker the changer of rows
//create function for find Rj
int find_Rj(double matrix[100][100], int);
void reduce_n(double matrix[100][100], int, int);
void fact_jordan(double matrix[100][100],int n,int m);

int main(){
  ask();
  return 0;
}

void ask(){
  int m, n, M;
  double matrix[100][100];

  cout << "Resolve system n*m" << endl;
  cout << "\n";
  cout << "Number of equation: "; cin >> n;
  cout << "Number of variable: "; cin >> m;
  if(n != m){
    cout << "The system have infinite solutions" << endl;
  }
  M = m + 1;
  cout << "Element of system of a increased matrix" << endl;
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < M; j ++){
      cout << "Element [" << i << "]" << "["<< j << "]: "; cin >> matrix[i][j];
    }
  }
  //now we must calculate of the determinant for know if system have solution
  //reduce system to nxn remove the last column
  reduce_n(matrix, n, M);
}

//return the value of determinante
double factorizacion_LU(double matrix[100][100], int n, int ind){
  double a, b;
  int Ri, Rj, N = 0;
  for(int i = 0; i < n; i ++){
    for(int i = N + 1; i < n; i ++){
      Ri = N;
      Rj = i;

      a = -matrix[i][N]/matrix[N][N];
      //case matrix[N][N] == 0 then change of row, where this row before of
      //element matrix[i][i] are zero
      convert_vector(matrix, n, Rj, Ri, a);
    }
    N ++;
    if(N == n - 1){
      Ri = N;
      Rj = i;
      a = 0;
      convert_vector(matrix, n, Rj, Ri, a);
    }
  }
  
  b = determinante(matrix, n, ind);
  return b;
}

void convert_vector(double matrix[100][100], int n, int Rj, int Ri, double a){
  double vector1[100], vector2[100], c = 0, d = 0, e = 0;

  for(int i = 0; i < n; i++){
    c = matrix[Ri][i];
    vector1[i] = c;
  }

  for(int i = 0; i < n; i ++){
    d = matrix[Rj][i];
    vector2[i] = d;
  }


  for(int i  = 0; i < n; i ++){
    e = vector2[i] + a*vector1[i];
    matrix[Rj][i] = e; //we must save the new values in the column Rj of the matrix
  }
}

double determinante(double matrix[100][100], int n, int ind){
  double D = 1;
  for(int i = 0; i < n; i ++){
    D = D*matrix[i][i];
  }
  D = ind*D;
  return D;
}

int find_Rj(double matrix[100][100], int n){
  double R, t = 0;
  for(int i = 1; i < n; i ++){
    if(matrix[i][0] != 0 and t == 0){
      R = i;
      t = 1;
    }
  }
  return R;
}

void change_rows(double matrix[100][100], int n, int Ri, int Rj){
  double vector1[100], vector2[100];
  for(int i = 0; i < n; i ++){
    vector1[i] = matrix[Ri][i];
    vector2[i] = matrix[Rj][i];
  }

  for(int i = 0; i < n; i ++){
    matrix[Ri][i] = vector2[i];
    matrix[Rj][i] = vector1[i];
  }
}

void reduce_n(double matrix[100][100], int n, int m){
  double matrix_1[100][100], a, ind = 1;
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m - 1; j ++){
      a = matrix[i][j];
      matrix_1[i][j] = a;
    }
  }

  if(factorizacion_LU(matrix_1, n, ind) == 0){
    cout << "System haven't solution" << endl;
  }
  else {
    fact_jordan(matrix, n, m);
  }
}

void fact_jordan(double matrix[100][100], int n, int m){
  
  double a;
  int b;

  int Ri, Rj, N = 0;
  for(int i = 0; i < n; i ++){
    for(int i = N + 1; i < m; i ++){
      Ri = N;
      Rj = i;

      a = -matrix[i][N]/matrix[N][N];
      //case matrix[N][N] == 0 then change of row, where this row before of
      //element matrix[i][i] are zero
      convert_vector(matrix, m, Rj, Ri, a);
    }
    for(int i = N - 1; i >= 0; i --){
      Ri = N;
      Rj = i;

      a = -matrix[i][N]/matrix[N][N];
      //case matrix[N][N] == 0 then change of row, where this row before of
      //element matrix[i][i] are zero
      convert_vector(matrix, m, Rj, Ri, a);
    }
    N ++;
    if(N == m - 1){
      Ri = N;
      Rj = i;
      a = 0;
      convert_vector(matrix, m, Rj, Ri, a);
    }
  }
  //print the new matrix
  cout << "\n";
  cout << "Matrix after of method Gauss-Jordan" << endl;
  cout << "\n";
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
      cout << matrix[i][j]/matrix[i][i] << " ";
    }
    cout << "\n";
  }

  cout << "\n";
  cout << "Then the solution of system is: " << endl;
  b = m - 1;
  for(int i = 0; i < n; i ++){  
    cout << "Variable " << i + 1 << ": " << matrix[i][b]/matrix[i][i] << endl;
  }
}
