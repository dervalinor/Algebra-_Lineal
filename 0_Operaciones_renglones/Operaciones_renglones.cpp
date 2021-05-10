//create a program for make the operations Ri --> (1/a)Ri y Rj --> Rj + a*Ri
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void row_const(double ren1[], int, double);
void row_sum(double ren1[],double ren2[], int, double);

double c = 0;

int main(){

  ask();
  return 0;
}

void ask(){
  double ren1[100], ren2[100], a;
  int n, opt;

  cout << "Operaciones con renglones de tipo: " << endl;
  cout << "1. Ri --> (1/a)Ri" << endl;
  cout << "2. Rj --> Rj + a*Ri" << endl;
  cout << "\nElige una opcion: "; cin >> opt;
  cout << "Tamaño de los renglones: "; cin >> n;
  if(opt == 1){
    
    cout << "Renglo i: " << endl;
    cout << "\n";
    for(int i = 0; i < n; i++){
      cout <<"Renglon "<< i << ": "; cin >> ren1[i];
    }
    cout << "Constant: "; cin >> a;
    row_const(ren1, n, a);  


  } else if(opt == 2){
    
    cout << "Renglo j: " << endl;
    cout << "\n";
    for(int i = 0; i < n; i++){
      cout <<"Renglon "<< i << ": "; cin >> ren1[i];
    }

    cout << "Renglo i: " << endl;
    cout << "\n";
    for(int i = 0; i < n; i++){
      cout <<"Renglon "<< i << ": "; cin >> ren2[i];
    }
    cout <<"Constant: "; cin >> a;
    row_sum(ren1, ren2, n, a);

  }

}

void row_const(double ren1[], int n, double a){
  for(int i = 0; i < n; i++){
    c = ren1[i]/a;
    cout << c << " ";
  } 
}

void row_sum(double ren1[], double ren2[], int n, double a){
  for(int i = 0; i < n; i++){
    c = ren1[i] + a*ren2[i];
    cout << c << " ";
  } 
}
