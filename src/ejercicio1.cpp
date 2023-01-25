#include <iostream>
#include <assert.h>
using namespace std;

bool esPrimo(int y){
    assert(y > 0);
    
    bool primo;
    int sumardiv = 0;
    for (int i = 1; i < y; i++) {
        if (y % i == 0){
            sumardiv++;
        } 
    }

    if (sumardiv == 1){
        primo = true;
    } else {
        primo = false;
    }
    return primo;
}


int main() {
    int y = 0;
    cout << "Ingrese un numero: " << endl;
    cin >> y;

    string res = (esPrimo(y)) ? " El numero ingresado es primo " : " El numero ingresado no es primo ";
    
    cout << res << endl;
    return 0;
}