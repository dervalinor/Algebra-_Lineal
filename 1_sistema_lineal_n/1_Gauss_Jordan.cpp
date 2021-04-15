#include <iostream>
#include <math.h>

using namespace std;

void ask();
void Gauss_Jordan(double matrix[100][100], int, int);

int main(int argc, char const *argv[])
{
  ask();	
	return 0;
}

void ask(){

  double matrix[100][100];
  int n, m;

  cout << "Search the solution of system of n variables and m equations" << endl;
  
  cout << "\nNumber of variables: "; cin >> n;
  cout << "Number of equations: "; cin >> m;
  
  cout << "Give me value of coefficient in form matrix: " << endl;
  for(int i = 0; i < n; i++){ 
    for(int j = 0; j < m;j++ ){
      cout << "a" << i << j << ": "; cin >> matrix[i][j];
    }
  
  }
  
  Gauss_Jordan(matrix, n, m); 
}


void Gauss_Jordan(double matrix[100][100], int n, int m){
  
  int N = 0, a, b, c;

  for(int i = 0; i < n; i++){
    N = i;
    for(int j = 0; j < m; j++){
      a = matrix[N][j]/matrix[N][N];
      matrix[i][j] = a;
    }

    for(int i = N; i > 0; i --){
      for(int j = 0; j < m; j ++){
        b = -matrix[i][N]*matrix[N][j] + matrix[i][j];
        matrix[i][j] = b;
      }
    }
  cout << "\n";
  for(int i = N; i < n; i++){
    for(int j = 0; j < m; j ++){
      c = -matrix[i][N]*matrix[N][j] + matrix[i][j];
      matrix[i][j] = c;
    }
  }
  cout << "\n";
  }

}
