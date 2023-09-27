#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

// literais = string

int main(void) {
    // output file stream
    std::ofstream fout;
    // input file stream
    std::ifstream fin;
    // string para guardar o nome
    std::string s;

    // abre o arquivo
    fout.open("C:/Users/Lucila/Downloads/teste.txt");
    // verifica se a abertura foi ok
    if (fout.is_open()) {
        // grava no fluxo
        fout << "Costa\n";
    } else {
        std::cout << "nao abriu o arquivo\n";
        std::exit(0);
    }

    //fecha o arquivo
    fout.close();
    fin.open("C:/Users/Lucila/Downloads/teste.txt");
    if (fin.is_open()) {
        // le o dado
        fin >> s;
        std::cout << s << std::endl;
    } else {
        std::cout << "nao abriu o arquivo\n";
        std::exit(0);
    }
    fin.close();
}
