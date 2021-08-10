/* create a program for change the rows of matrix nxn */

#include <iostream>
#include <math.h>

using namespace std;

void ask();
void change_rows(double matrix[100][100], int);

int main(){
  ask();
  return 0;
}

void ask(){
  int n, Ri, Rj;
  double matrix[100][100];

  cout << "Change of row for matrix nxn" << endl;
  cout << "\n";
  cout << "Size of the matrix: "; cin >> n;
  cout << "Number of row to change: "; cin >> Ri;
  cout << "Number of row for change: "; cin >> Rj;
  cout << "Elements of the matrix: " << endl;
  cout << "\n";
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < n; j ++){
      cout << "Element [" << i << "]" << "[" << j << "]: "; cin >> matrix[i][j];
    }
  }
  change_rows(matrix, n, Ri, Rj);
}

void change_rows(double matrix[100][100], int n, int Ri, int Rj){
  
  double aux;
  for(int i = 0; i < n; i ++){
    
  }
}
