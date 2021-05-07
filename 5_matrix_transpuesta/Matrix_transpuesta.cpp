/* 
 Sie erstellen ein Programm für berechnen die vertauschen Matrix 
*/
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void matrix_transposed(double matrix1[][], int m1, int n1);
void matrix_simetrica(double matrix1[][], double matrix2[][], int m1, int n1, int m2, int n2);

int main(){
  
  ask(); 
  return 0;
}

void ask(){
  cout << "Transposed and symmetry matrix" << endl;
  cout << "\n1. Calculate transposed matrix" << endl;
  cout << "2. Calculate symmetry matrix" << endl;  
  cout << "Choose an option: "; cin >> opt;
  cout << "\n";
  switch(opt){
    case 1: 
      cout << "Number of rows: "; >> cin m1;
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
      cout << "Matrix 1" << endl;
      cout << "Number of rows: "; cin >> m1;
      cout << "Number of columns: " ; cin >> n1;
      cout << "Element of the matrix 1: " << endl;
      cout << "\n";
      for(int i = 0; i < m1; i ++){
        for(int j = 0; j < n1; j ++){
          cout << "Element [" << i + 1 << "]" << "[" << j + 1 << "]: " ; cin >> matrix1[i][j];
        }
      }

      cout << "\n";
      cout << "Matrix 2" << endl;
      cout << "Number of rows: "; cin >> m1;
      cout << "Number of columns: " ; cin >> n1;
      cout << "Element of the matrix 1: " << endl;
      cout << "\n";
      for(int i = 0; i < m2; i ++){
        for(int j = 0; j < n2; j ++){
          cout << "Element [" << i + 1 << "]" << "[" << j + 1 << "]: " ; cin >> matrix2[i][j];
        }
      }

  }
}

void matrix_transposed(double matrix1[][], int m1, int n1){
  
}

void matrix_simetrica(double matrix1[][], double matrix2[][], int m1, int n1, int m2, int n2){
  
}
