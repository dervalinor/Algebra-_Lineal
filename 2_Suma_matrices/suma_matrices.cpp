#include <iostream>
#include <math.h>

using namespace std;

void ask();
void suma_matrices(double matrix1[100][100],double matrix2[100][100] ,int, int, int, int);

int main(){
  
  ask();
  return 0;
}
void ask(){

  double matrix1[100][100], matrix2[100][100];
  int row1, row2, col1, col2, a, b;

  cout << "Sum of two matrices of type a*A + b*B, where a and b are scalars and A and B are matrices" << endl;
  cout << "\n";
  cout << "Matrix 1" << endl;
  cout << "Number of rows: "; cin >> row1;
  cout << "Number of colums: "; cin >> col1;
  cout << "Constant for matrix 1: "; cin >> a;
  cout << "\n";
  cout << "Matrix 2" << endl;
  cout <<"Number of rows: ";cin >> row2;
  cout << "Number of columns: "; cin >> col2;
  cout <<"Constant for matrix 2: "; cin >> b;
  cout << "\n";

  if(row1 == row2 and col1 == col2){
    cout << "\nElements of the matrix 1: " << endl;
    cout << "\n";
    for(int i = 0; i < row1; i++){
      for(int j = 0; j < col1; j++){
        cout << "Element [" << i << "]" << "[" << j << "]: "; cin >> matrix1[i][j];
      }
    }

    cout << "\nElements of the matrix 2: " << endl;
    cout << "\n";
    for(int i = 0; i < row1; i++){
      for(int j = 0; j < col1; j++){  
        cout << "Element [" << i << "]" << "[" << j << "]: "; cin >> matrix2[i][j];
       }
    }
    suma_matrices(matrix1, matrix2, row1, col1, a, b);
  }

  else {
    cout << "The matrix can't sum because it is different size" << endl;
  }


}
void suma_matrices(double matrix1[100][100], double matrix2[100][100], int row1, int col1, int a, int b){
  
  double c = 0;

  for(int i = 0; i < row1; i++){
    for(int j = 0; j < col1; j++){
      c = a*matrix1[i][j] + b*matrix2[i][j];  
      cout << c << " ";
    }
    cout << "\n";
  }
}
