#include <iostream>
using namespace std;

int conjeturaDeCollatz(int n, int &cantPasos){
    if (n == 1){
        return cantPasos + 1;
    }

    if (n % 2 == 0){
            /* Caso par */
            n = n / 2;
    } else {
        /* Caso impar */
        n = 3 * n + 1;
    }
    cantPasos++;
    return conjeturaDeCollatz(n,cantPasos);
}

int main() {
    int x = 0;
    cout << "Ingrese el primer para a: " << endl;
    cin >> x;
    
    int cantPasos;
    conjeturaDeCollatz(x,cantPasos);
    
    cout << "El resultado es " << cantPasos << " " << x << endl;
    return 0;
}