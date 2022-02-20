//create a identity of size nxn
#include <iostream>

using namespace std;

void identity_matrix(int);

int main(){
    int n;
    cout << "Size of identity matrix: "; cin >> n;
    identity_matrix(n);
    return 0;
}

void identity_matrix(int n){
    double matrix[1000][1000];
    //identity matrix if i == j then matrix[i][j] == 1 and if i != j
    //matrix[i][j] == 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            if(i == j){
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }           
        }
    }

    cout << "\n";
    cout << "Identity matrix: ";
    cout << "\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            cout << matrix[i][j] << " "; 
        }
        cout << "\n";
    }
}
