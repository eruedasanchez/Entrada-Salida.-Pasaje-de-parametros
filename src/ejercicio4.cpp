#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("numeros.txt");

    while(!fin.eof()){
        int a;
        fin >> a;
        cout << a << " ";
    }
    
    fin.close();

    return 0;
}