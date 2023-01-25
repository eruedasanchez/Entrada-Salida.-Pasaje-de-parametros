#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 0;
    cout << "Ingrese el primer valor para a: " << endl;
    cin >> x;
    cout << "El primer valor ingresado para a es: " << x << endl;

    int y = 0;
    cout << "Ingrese el primer valor para b: " << endl;
    cin >> y;
    cout << "El primer valor ingresado para b es: " << y << endl;

    swap(x,y);
    
    cout << "El nuevo valor de a es " << x << " y el nuevo valor de b es " << y << endl;
    return 0;
}