#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv){
    std::string linha;

    std::fstream arquivo("texto.txt");

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            std::cout << linha << std::endl;
        }
        arquivo.close();

    }else{
        std::cout << "Não foi possível abrir o arquivo" << std::endl;
    }

    return 0;
}
