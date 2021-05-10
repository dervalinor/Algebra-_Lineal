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
  //possible the error is save differents value in same variable:
  //- put the result of the equations in other vector and only work with this

  double matrix[100][100];
  int n, m;

  cout << "Search the solution of system of n variables and m equations" << endl;
  
  cout << "\nNumber of variables: "; cin >> m;
  cout << "Number of equations: "; cin >> n;
  
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

    if(N == 0){//because N - 1 no exist in N = 0
      
      for(int i = N + 1; i < n; i++){
        for(int j = 0; j <= m; j ++){
            c = -matrix[i][N]*matrix[N][j] + matrix[i][j];
            matrix[i][j] = c;
        }
      }
    } else if(N == n - 1){
    
      for(int i = N - 1; i >= 0; i --){
        for(int j = 0; j <= m; j ++){
          b = -matrix[i][N]*matrix[N][j] + matrix[i][j];
          matrix[i][j] = b;
        }
      }
    } else {
    
      for(int i = N - 1; i >= 0; i --){
        for(int j = 0; j <= m; j ++){
          b = -matrix[i][N]*matrix[N][j] + matrix[i][j];
          matrix[i][j] = b;
        }
      }


    for(int i = N + 1; i < n; i++){
      for(int j = 0; j <= m; j ++){
          c = -matrix[i][N]*matrix[N][j] + matrix[i][j];
          matrix[i][j] = c;
        }
      }
    }

  }
  
  cout << "Solution of system of linear equations: " << endl;

  cout << "\n";

  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }  

}
