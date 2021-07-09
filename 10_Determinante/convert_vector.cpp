//create a function for sum rows as vectors and realize operation with this

#include <iostream>
#include <math.h>

using namespace std;

void ask();
void convert_vector(double matrix[100][100], int, int, int, int, double);

int main(){

  ask();
  return 0;
}

void ask(){
  double matrix[100][100], a;
  int n, m, Rj, Ri;
  cout << "Operations of rows" << endl;
  cout << "1. Rj --> Rj + a*Ri";
  cout << "\nElements of the matrix " << endl;
  cout << "Number of row: "; cin >> n;
  cout << "Number of columns: "; cin >> m;
  cout << "Rj: "; cin >> Rj;//the rows beginning of zero
  cout << "Ri: "; cin >> Ri;
  cout << "a: "; cin >> a;
  cout << "\n ";
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
      cout << "Element " << "["  << i + 1 << "]" << "[" << j + 1 << "]: "; cin >> matrix[i][j];
    }
  }
  convert_vector(matrix, n, m, Rj, Ri, a);
}

void convert_vector(double matrix[100][100], int n, int m, int Rj, int Ri, double a){
  double vector1[100], vector2[100], c = 0, d = 0, e = 0;
  
  for(int i = 0; i < m; i++){
    c = matrix[Ri][i];
    vector1[i] = c; 
  }

  for(int i = 0; i < m; i ++){
    d = matrix[Rj][i];
    vector2[i] = d;
  }

  cout << "\nResult of operation: " << endl;
  cout << "\n";

  for(int i  = 0; i < m; i ++){
    e = vector2[i] + a*vector1[i];
    cout << e << " ";
  }  
}
