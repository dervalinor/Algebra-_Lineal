#include <iostream>
#include <math.h>

using namespace std;

void ask();
void multi_matrix(double matrix1[100][100], double matrix2[100][100], int, int, int, int);

double c = 0, a = 0, b = 0;
int m = 0, k = 0, l = 0;

int main(){

  ask();
  return 0;
}

void ask(){
  
  double row1, row2, col1, col2, matrix1[100][100], matrix2[100][100];

  cout << "Multiply of matrices A and B" << endl;
  cout << "\nMatrix A: " << endl;
  cout << "Number of rows: "; cin >> row1;
  cout << "Number of columns: " ;cin >> col1;

  cout << "\nMatrix B: " << endl;
  
  cout << "Number of rows: "; cin >> row2;
  cout << "Number of columns: "; cin >> col2;

  if(col1 == row2){
    cout << "\nElements of the matrix A" << endl;
    cout << "\n";
    for(int i = 0; i < row1; i++){
      for(int j = 0; j < col1; j++){
        cout << "Element " << "[" << i  << "]" << "[" << j  << "]: "; cin >> matrix1[i][j];
      }
      cout << "\n";
    }

  cout << "\nElements of the matrix B: " << endl;
  cout << "\n";
  
    for(int i = 0; i < row2; i++){
      for(int j = 0; j < col2; j++){
        cout << "Element " << "[" << i  << "]" << "[" << j  << "]: "; cin >> matrix2[i][j];
      }
      cout << "\n";
    }

    multi_matrix(matrix1, matrix2, row1, row2, col1, col2);

  } else {
    cout << "Multiply can't make" << endl;
  }
}

void multi_matrix(double matrix1[100][100], double matrix2[100][100], int row1, int row2, int col1, int col2){
  
  cout << "\nResult: " << endl;
  cout << "\n";

  for(int i = 0; i < row1; i ++){
    k = i;
    for(int j = 0; j < col2; j ++){
      l = j;
      for(int j = 0; j < col1; j ++){
        a = matrix1[k][j];
        b = matrix2[j][l];

        c = c + a*b;
        m = m + 1;

        if(m == col1){
          cout << c << " ";
          c = 0;
          m = 0;
        }
      }
    } 
    if(m == 0){
      cout << "\n";
    }
  }  
}
