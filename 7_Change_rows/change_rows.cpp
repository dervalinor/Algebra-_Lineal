/* create a program for change the rows of matrix nxn */
//the row are count of zero 
//add message if Ri or Rj is greater than n
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void change_rows(double matrix[100][100], int, int, int);

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
  if(Ri > n or Rj > n){
    cout << "Number of row no exist" << endl;
  }

  else {
    
    cout << "Elements of the matrix: " << endl;
    cout << "\n";
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < n; j ++){
        cout << "Element [" << i << "]" << "[" << j << "]: "; cin >> matrix[i][j];
      }
    }
    cout << "\n";
    change_rows(matrix, n, Ri, Rj);
  }

}

void change_rows(double matrix[100][100], int n, int Ri, int Rj){
  //save values to change in vectors
  double vector1[100], vector2[100];
  cout << "Original matrix" << endl;
  
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < n; j ++){
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }

  for(int i = 0; i < n; i ++){
    vector1[i] = matrix[Ri][i];
    vector2[i] = matrix[Rj][i];
  }
  //change of row of matrix
  for(int i = 0; i < n; i ++){
    matrix[Ri][i] = vector2[i];
    matrix[Rj][i] = vector1[i];
  }
  //print the new matrix
  cout << "\nMatrix with change of row " << Ri << " for " << Rj << endl;
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < n; j ++){
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
}
