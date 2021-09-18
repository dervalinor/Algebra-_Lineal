/*create a program for reduce a matrix n*m to n*n remove the last 
column */
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void reduce_n(double matrix[100][100], int, int);

int main(){
  ask();
  return 0;
}

void ask(){
  int n, m;
  double matrix[100][100];
  cout << "Matrix n*m to n*m" << endl;
  cout << "\n";
  cout << "n: "; cin >> n;
  cout << "m: "; cin >> m;
  cout << "\n";
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
      cout << "Element: [" << i << "]["<< j << "]: "; cin >> matrix[i][j]; 
    }
  }
  //save new data in other matrix
  reduce_n(matrix, n, m);
}

void reduce_n(double matrix[100][100], int n, int m){
  double matrix_1[100][100], a;

  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m - 1; j ++){
      a = matrix[i][j];
      matrix_1[i][j] = a;
    }
  }
  cout << "New matrix with the last column" << endl;
  cout << "\n";
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m - 1; j ++){
      cout << matrix_1[i][j] << " ";
    }
    cout << "\n";
  }
}
