#include <iostream>
#include <fstream>

int main(){
    int a;
    float f;
    std::ifstream fin;
    fin.open("entrada.txt");

    fin >> a;
    fin >> f;
    fin.close();

    return 0;
}