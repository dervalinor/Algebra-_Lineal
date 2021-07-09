/*
create a program for find the solution of system lineal for different 
methods: substitution, equalization and determinates of Cramer
 */
#include <iostream>
#include <math.h>

using namespace std;

void ask();
void sustitucion(double, double, double, double, double, double);
void igualacion(double, double, double, double, double, double);
void cramer(double, double, double, double, double, double);
double determinate2(double, double, double, double);
double determinante_calculo(double, double, double);
double value_xd(double, double, double, double);
double value_xb(double, double, double, double);

double y, x, A;

int main(){
  ask();
  return 0;
}

void ask(){//calculate determinate for know if the system have solution
  double a, b, c, d, e, f;
  int opt;
  cout << "Method of solution for the equations ax + by = c and dx + ey = f" << endl;
  cout << "\n1. Method of substitution" << endl;
  cout << "2. Mehod of equalization" << endl;
  cout << "3. Method of Cramer" << endl;
  cout << "4. calculate determinate" << endl;
  cout << "5. Calculate value x of determinate xb - cd" << endl;
  cout << "6 calculate value x of determinate ab - xd" << endl;
  cout << "\nChoose an option: "; cin >> opt;

  if (determinate2(a, b, d, e) != 0)
  {
    switch(opt){
      case 1:
  cout << "\na: ";cin >> a;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;
  cout << "e: "; cin >> e;
  cout << "f: "; cin >> f;
        sustitucion(a, b, c, d, e, f);
        break;

      case 2:
  cout << "\na: ";cin >> a;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;
  cout << "e: "; cin >> e;
  cout << "f: "; cin >> f;
        igualacion(a, b, c, d, e, f);
        break;

      case 3:
  cout << "\na: ";cin >> a;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;
  cout << "e: "; cin >> e;
  cout << "f: "; cin >> f;
        cramer(a, b, c, d, e, f);
        break;

      case 4: 
  cout << "\na: ";cin >> a;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;
        cout << "Determinante: " << determinate2(a, b, d, e) << endl;
        break;

      case 5: 
        cout << "\nDeterminate: "; cin >> A;
  cout << "b: "; cin >> b;
  cout << "c: "; cin >> c;
  cout << "d: "; cin >> d;
        cout << "value x : " << value_xd(A, b, c, d) << endl;
        break;

      case 6: 
        cout << "\nDeterminate: "; cin >> A;
  cout << "a: "; cin >> a;
  cout << "b: "; cin >> b;
  cout << "d: "; cin >> d;
        cout << "Value x: " << value_xb(A, a, b, d) << endl;
        break;
    }

  }

  else {

    cout << "The system have not solution" << endl;
  }

}

void sustitucion(double a, double b, double c, double d, double e, double f){
  cout << "\nDespejando de  " << a << "x + " << b << "y = " << c << " la variable y : " << endl;
  cout << "y = " << - a << "x/" << b << " + (" << c << "/" << b << ")" << endl;
  cout << "y = " << - a/b << "x + (" << c/b << ")" << endl;
  cout << "\nLuego reemplazando y en la ecuacion  " << d << "x + " << e << "y = " << f << " obteniendo: " << endl;
  cout << "\n";
  cout << d << "x + " << e << "(" << - a/b << "x + (" << c/b << ")" << ") = " << f << endl;
  cout << "x(" << d << "*" << b << " - " << a << "*" << e << ")/" << b << " = " << "(" << f <<"*" << b << " - " << e << "*" << c << ")" << endl;
  cout << "x = (" <<  f  << "*" << b << " - " << e << "*" << c << ")/" << "(" << d << "*" << b << " - " << a << "*" << e << ")" << endl;
  cout << "x = " << (f*b - e*c)/(d*b - a*e);  
  x = (f*b - e*c)/(d*b - a*e); 
  cout << "\nSustituyendo el valor de x en la ecuacion y = " << - a/b << "x + (" << c/b << ") obtenemos que: " << endl;
  cout << "y = " << - a/b << "*" << x << " + (" << c/b << ")" << endl;
  cout << "y = " << - a*x/b << " + (" << c/b << ")" << endl;
  cout << "y = " << - a*x/b  +  c/b << endl;
}

void igualacion(double a, double b, double c, double d, double e, double f){ 
  cout << "\nDespejando de  " << a << "x + " << b << "y = " << c << " la variable y : " << endl;
  cout << "y = " << - a << "x/" << b << " + (" << c << "/" << b << ")" << endl;
  cout << "y = " << - a/b << "x + (" << c/b << ")" << endl;
  cout << "\nDespejando de  " << d << "x + " << e << "y = " << f << " la variable y : " << endl;
  cout << "y = " << - d << "x/" << e << " + (" << f << "/" << e << ")" << endl;
  cout << "y = " << - d/e << "x + (" << f/e << ")" << endl;
  cout << - a << "x/" << b << " + " << c << "/" << b << " = " << - d << "x/" << e << " + " << f << "/" << e << endl;
  cout << - a << "x/" << b << " + " << d << "x/" << e << " = " << f << "/" << e << " + " << - c << "/" << b << endl;
  cout << "x(" << - a << "*" << e << " + " << b << "*" << d << ")/" << b << "*" << e << " = (" << f << "*" << b << " - " << c << "*" << e << ")/" << b << "*" << e << endl;
  cout << "x = " << (f*b - e*c)/(d*b - a*e); 
  x = (f*b - e*c)/(d*b - a*e); 
  cout << "\nSustituyendo el valor de x en la ecuacion y = " << - a/b << "x + (" << c/b << ") obtenemos que: " << endl;
  cout << "y = " << - a/b << "*" << x << " + (" << c/b << ")" << endl;
  cout << "y = " << - a*x/b << " + (" << c/b << ")" << endl;
  cout << "y = " << - a*x/b  +  c/b << endl;
}

void cramer(double a, double b, double c, double d, double e, double f){
  x = (e*c - b*f)/(a*e - d*b);
  y = (a*f - d*c)/(a*e - d*b);
  cout << "como x es encuentra al calcular los determinates: " << e << "*" << c << " - " << b << "*" << f << " y " << a << "*" << " - " << d << "*" << b << endl;
  cout << "\nEntonces el valor de x es: " << endl;
  cout << " x = " <<  (e*c - b*f)<< "/" << (a*e - d*b) << endl;
  cout << " x = " <<  (e*c - b*f)/(a*e - d*b) << endl;
  cout << "como y es encuentra al calcular los determinates: " << a << "*" << f << " - " << d << "*" << c << " y " << a << "*" << " - " << d << "*" << b << endl;
  cout << "y = " << (a*f - d*c) << "/" << (a*e -d*b) << endl; 
  cout << "y = " << (a*f - d*c)/(a*e -d*b) << endl; 
}

double determinate2(double a, double b, double d, double e){
  double D = 0;
  D = a*e - d*b;
  cout <<"D = " << a << "*" << e << " - " << d<< "*"<< b << endl;
  return D;
}

double value_xd(double A, double b, double c, double d){
  double x;
  x = (A - c*b)/d;
  return x;
}

double value_xb(double A, double b, double a, double d){
  double x;
  x = (a*d - A)/b;
  return x;
}
