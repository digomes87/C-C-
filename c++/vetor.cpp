#include <iostream>
#include <vector>
#include <algorithm>
#include "header/cpf_validacao.h"


int main(){

    cpf_validacao();

    std::vector<std::string> v = {"Elvis Presley", "Michael Jackson", "Bob Dylan", "Frank Sinatra", "Freddie Mercury","sera removido com o comando pop_back()"};


    //comando adiciona elemento no final do vector
    v.push_back("AQUI UM NOVO ELEMENTO ADICIONAR, porém o comando abaixo remove o ultimo elemento ");

    //comando remove ultimo elemento do vector
    v.pop_back();
    std::vector<std::string>::iterator it = v.begin();
    while(it != v.end()){
        std::cout << *it << std::endl;
        it++;
    };

    return 0;
}
