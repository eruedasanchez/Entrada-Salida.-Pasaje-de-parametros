#include <iostream>
#include <fstream>

int main(){
    std::ofstream fout;
    fout.open("mi_archivo.txt");
    fout << 89 << std::endl;
    fout << 6 << std::endl;
    fout << 25 << std::endl;
    fout.close();
    return 0;
}