#include <iostream>

using namespace std;

void valorAbsoluto(int &y){
    if(y < 0){
        y = -y;
    }
}

int main(){
    int x = -5;
    valorAbsoluto(x);
    cout << "El valor de x es: " << x;
    return 0;
}

/* cambiarValor recibe una referencia a la porción de memoria de x, luego, al cambiar el valor de y está cambiando el valor de la porción de memoria compartida, cambiando de esta manera el valor de x. */

