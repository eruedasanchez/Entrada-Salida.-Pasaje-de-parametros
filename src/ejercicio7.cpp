#include <iostream>
using namespace std;

int conjeturaDeCollatz(int n, int &cantPasos){
    cout << n << " ";
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
    cout << "Ingrese el numero para calcular la conjetura de Collatz: " << endl;
    cin >> x;
    
    int cantPasos;
    cout << "La sucesion es: ";
    conjeturaDeCollatz(x,cantPasos);
    
    cout << " " << endl;
    cout << "La cantidad de pasos es: " << cantPasos << " " << endl;
    return 0;
}