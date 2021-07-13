//create program for calcute the inner-product, angle and crux product (for 
//vector 3d)
#include<iostream>
#include<math.h>

using namespace std;

void ask();
double inner_product(double v[], double u[], int);
double angle_uv(double v[],double u[], int);
void crux_product(double v[], double u[], int);
double magnitude(double vektor[], int);

double C = 0, D = 0, a = 0, E = 0;

int main(){
  
  ask();
  return 0;
}

void ask(){
  double u[100], v[100];
  int opt, n;
  cout << "Operation of two vectores" << endl;
  cout << "1. Inner-product v.u" << endl;
  cout << "2. Angle between two vectores" << endl;
  cout << "3. crux-product vxu" << endl;
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
    
    case 3:
      if(n == 3){
        crux_product(v, u, n);
      } else {
        cout << "Crux product is for vectores of 3 dimentiones" << endl;
      }
      break;
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
  return E; 
}

void crux_product(double v[], double u[], int n){
  C = v[2]*u[3] - u[2]*v[3];
  D = v[1]*u[3] - u[1]*v[3];
  a = v[1]*u[2] - u[1]*v[2];
  cout << "vxu = " << C << "i + (" << - D << ")j + (" << a << ")k" << endl;
}

double magnitude(double v[], int n){
  C = 0;
  for(int i = 0; i < n; i ++){
    a = v[i];
    C = C + pow(a, n);
  }

  D = sqrt(C);
  return D;
}
