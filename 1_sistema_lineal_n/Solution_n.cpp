//create a program for the method of Gauss-Jordan
#include <iostream>
#include <math.h>

using namespace std;

void ask();

int main(){
  ask();
  return 0;
}

void ask(){
  int m, n;
  double matrix[100][100];
    
  cout << "Resolve system n*m" << endl;
  cout << "\n";
  cout << "Number of equation: "; cin >> n;
  cout << "Number of variable: "; cin >> m;
  if(n != m){
    cout << "The system have infinite solutions" << endl;
  } 
  M = m + 1;
  cout << "Element of system of a increased matrix" << endl;
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < M; j ++){
      cout << "Element [" << i << "]" << "["<< j << "]: "; cin >> matrix[i][j];
    }
  }
  //now we must calculate of the determinant for know if system have solution

}
