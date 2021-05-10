/* 
 Sie erstellen ein Programm für berechnen die vertauschen Matrix 
*/
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void matrix_transposed(double matrix1[100][100], int m1, int n1);//Important give the size of the matrix 
void matrix_simetrica(double matrix1[100][100], int m1, int n1);

int main(){
  
  ask(); 
  return 0;
}

void ask(){

  double matrix1[100][100]; 
  int m1, n1, opt;

  cout << "Transposed and symmetry matrix" << endl;
  cout << "\n1. Calculate transposed matrix" << endl;
  cout << "2. Calculate symmetry matrix" << endl;  
  cout << "\nChoose an option: "; cin >> opt;
  cout << "\n";
  switch(opt){
    case 1: 
      cout << "Number of rows: "; cin >> m1;
      cout << "Number of columns: " ; cin >> n1;
      cout << "\nElements of the matrix" << endl;
      cout << "\n"; 
      for(int i = 0; i < m1; i ++){
        for(int j = 0; j < n1; j ++){
          cout << "Element [" << i + 1 << "]" << "[" << j + 1 << "]: " ; cin >> matrix1[i][j];
        }
      }

      matrix_transposed(matrix1, m1, n1);
      break;

     case 2: 
      cout << "Number of rows: "; cin >> m1;
      cout << "Number of columns: " ; cin >> n1;
      cout << "Element of the matrix 1: " << endl;
      cout << "\n";
      for(int i = 0; i < m1; i ++){
        for(int j = 0; j < n1; j ++){
          cout << "Element [" << i + 1 << "]" << "[" << j + 1 << "]: " ; cin >> matrix1[i][j];
        }
      }

      if( m1 == n1){
        matrix_simetrica(matrix1, m1, n1);
      } else {
        cout << "The matrix is not symmetry" << endl;
      }
     break;
  }
}

void matrix_transposed(double matrix1[100][100], int m1, int n1){
  cout << "\nMatrix transposed" << endl;
  for(int i = 0; i < n1; i ++){
    for(int j = 0; j < m1; j ++){
      cout << matrix1[j][i] << " ";
    }
    cout << "\n";
  }
}

void matrix_simetrica(double matrix1[100][100], int m1, int n1){
  int l = 0, N;
  cout << "\n";
  for(int i = 0; i < n1; i ++){
    for(int j = 0; j < m1; j ++){
      if(matrix1[i][j] == matrix1[j][i]){
        l++;
      }
    }
  }

  N = n1*n1;

  if( l == N){
    cout << "\nMatrix is symmetry" << endl;
  } else {
    cout << "Matrix is not symmetry" << endl;
  }

}
