#include <iostream>
#include <string>
#include <stdexcept>
#include "header/quadrado.h"


using namespace std;


// quando nao tem retorno
void minha_funcao(){
    std::cout << "BOra de C+++!" << std::endl;
}

// quando tem retorno
int minha_funcao_return(){
    std::cout << "Essa funcao como é do tipo inteiro exige ao fim o return" << std::endl;
    return 0;
}


// funcao para converter string para int e trata possiveis excessoes
int stringToInt(const std::string& s) {
    try {
        return std::stoi(s);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erro: Entrada inválida '" << s << "' não é um número válido." << std::endl;
        return 0; // Ou qualquer valor padrão ou você pode sair do programa aqui
    } catch (const std::exception& e) {
        std::cerr << "Erro ao converter string para int: " << e.what() << std::endl;
        return 0; // Ou qualquer valor padrão ou você pode sair do programa aqui
    }
}



int soma(){
    std::string x, y;
    std::cout << "Digite o primeiro numero: " << std::endl;
    std::getline(std::cin, x);

    std::cout << "Digite o segundo numero: " << std::endl;
    std::getline(std::cin, y);



    if(!x.empty() && !y.empty()){
        int x_tratada = stringToInt(x);
        int y_tratada = stringToInt(y);

        std::cout << "A soma de " << x_tratada << " + " << y_tratada << " = " << x_tratada + y_tratada << std::endl;
    }else{
        std::cout << "Nao foi possivel realizar a soma" << std::endl;
    }
    return 0;
}

int main(){
    quadrado(23, 4);
    minha_funcao();
    minha_funcao_return();
    soma();
    return 0;
}


