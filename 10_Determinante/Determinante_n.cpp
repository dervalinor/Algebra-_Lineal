//find the determinate for matrix nxn with a recursive function, A = LU
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void convert_vector(double matrix[100][100], int, int, int, double); //remember is for a matrix nxn
void factorizacion_LU(double matrix[100][100], int, int);
double determinante(double matrix[100][100], int, int);
void change_rows(double matrix[100][100], int, int, int);
//matriz[Rj][i] != 0 for maker the changer of rows
//create function for find Rj
int find_Rj(double matrix[100][100], int);

int main(){
  ask();
  return 0;
}

void ask(){
  int Ri, Rj, ind = 1;
  double matrix[100][100];
  int n;
  cout << "Transform the matrix n*n A in U triangle superior matrix" << endl;
  cout << "\n";
  cout << "Size of A: "; cin >> n;
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < n; j ++){
      cout << "Element " << "[" <<i  + 1 << "]["<< j + 1 << "] : "; cin >> matrix[i][j];
    }
  }

  if(matrix[0][0] == 0){//if exist change of row then Det_A = -detA
    Ri = 0;
    Rj = find_Rj(matrix, n);
    change_rows(matrix, n, Ri, Rj);
    ind = -1;
  }

  factorizacion_LU(matrix, n, ind);
}

void factorizacion_LU(double matrix[100][100], int n, int ind){
  double a;
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

  cout << "\nDeterminant is: " << determinante(matrix, n, ind) << endl;
  
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
