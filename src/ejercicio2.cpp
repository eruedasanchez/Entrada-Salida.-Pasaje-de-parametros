#include <iostream>
#include <fstream>

int main(){
    int a = 8;
    int b = 5;
    float f = 1.2;
    float g = 1.6;
    std::ofstream fout;
    fout.open("salida.txt");

    fout << a << " , ";
    fout << b << " , ";
    fout << f << " , ";
    fout << g << " ";
    fout.close();
    return 0;
}