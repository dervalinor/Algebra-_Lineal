//create program for calcute the inner-product, angle and crux product (for 
//vector 3d)
#include<iostream>
#include<math.h>

using namespace std;

void ask();
double inner_product(double v[], double u[], int);
double angle_uv(double v[],double u[], int);
double crux_product(double v[], double u[], int);
double magnitude(double vektor[], int);

double C = 0;

int main(){
  
  ask();
  return 0;
}

void ask(){
  double u[], v[];
  int opt;
  cout << "Operation of two vectores" << endl;
  cout << "1. Inner-product u.v" << endl;
  cout << "2. Angle between two vectores" << endl;
  cout << "3. crux-product uxv" << endl;
  cout << "Choose an option: "; cin >> opt;
  cout <<"\n";
  cout << "Size of the vectores: "; cin >> n;
  cout << "\nElement of the vector u: " << endl;
  for(int i = 0; i < n; i ++){
    cout << "Element " << i + 1 << " : "; cin >> u[i];
  }
  cout << "\nElement of the vector v: " << endl;
  for(int i = 0; i < n; i ++){
    cout << "Element " << i + 1 << " : "; cin >> v[i];
  }
  switch(opt){
    case 1:
      inner_product(v, u, n);
      break;
      
    case 2:
      angle_uv(v, u, n);
      break;
    
    if(n == 3){
      
    }
  }
}

double inner_product(double v[], double u[], int n){
  for(int i = 0; i < n; i ++){
    C = C + v[i]*u[i];
  } 
  
  return C;
}

double angle_uv(double v[], double u[], int n){
  C = inner_product(v, u, n);
  D = magnitude(v, n)*magnitude(u, n);
  E = acos(C/D); 
}

double crux_product(double v[], double u[], int n){
  
}

double magnitude(double v[], int n){
  
}
