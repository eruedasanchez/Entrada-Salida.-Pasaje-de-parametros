#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream primerArchivoNumeros;
    primerArchivoNumeros.open("numeros1.txt");

    ifstream segundoArchivoNumeros;
    segundoArchivoNumeros.open("numeros2.txt");

    ofstream fout;
    fout.open("suma.txt");

    while(!primerArchivoNumeros.eof() && !segundoArchivoNumeros.eof()){
        int a;
        int b;
        primerArchivoNumeros >> a;
        segundoArchivoNumeros >> b;

        fout << a + b << " ";
    }

    primerArchivoNumeros.close();
    segundoArchivoNumeros.close();
    return 0;
}