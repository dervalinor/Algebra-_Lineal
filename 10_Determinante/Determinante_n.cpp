//find the determinate for matrix nxn with a recursive function, reduce the
//order n to 2x2
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void convert_vector(double matrix[100][100], int, int, int, double); //remember is for a matrix nxn
void factorizacion_LU(double matrix[100][100], int);
double determinante(double matrix[100][100], int);
void change_rows(double matrix[100][100], int, int, int);
//matriz[Rj][i] != 0 for maker the changer of rows
//create function for find Rj
int find_Rj(double matrix[100][100], int);

int main(){
  ask();
  return 0;
}

void ask(){
  int Ri, Rj;
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

  if(matrix[0][0] == 0){
    Ri = 0;
    Rj = find_Rj(matrix, n);
    change_rows(matrix, n, Ri, Rj);
  }

  factorizacion_LU(matrix, n);
}

void factorizacion_LU(double matrix[100][100], int n){
  double a;
  int Ri, Rj, N = 0;
  for(int i = 0; i < n; i ++){
    for(int i = N + 1; i < n; i ++){
      Ri = N;
      Rj = i;
      if(matrix[N][N] == 0){
        change_row(matrix, n);//then exist PA = LU, use a variable for
        //count the number of the change of rows, moreover detA = +detU
        //or detA = -detU
      }
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

  cout << "\nDeterminant is: " << determinante(matrix, n) << endl;
  
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

double determinante(double matrix[100][100], int n){
  double D = 1;
  for(int i = 0; i < n; i ++){
    D = D*matrix[i][i];
  }

  return D;
}

int find_Rj(double matrix[100][100], int n){
  for(int i = 1; i < n; i ++){
    if(matrix[i][0] != 0){
      return i;
    }
  }
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
