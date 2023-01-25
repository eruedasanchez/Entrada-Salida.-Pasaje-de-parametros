#include <iostream>

using namespace std;

void valorAbsoluto(int x){
    if(x < 0){
        x = -x;
    }
}

int main(){
    int x = -5;
    valorAbsoluto(x);
    cout << "El valor de x es: " << x;
    return 0;
}

/* Si bien el nombre de la variable que se le pasa como parámetro a valorAbsoluto coincide con el nombre de la variable en la declaración de la función, estas dos variables no comparten su porción de memoria debido a que x no es un parámetro pasado por referencia. */
