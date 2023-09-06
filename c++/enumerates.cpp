#include<iostream>

enum Cores {
    VERMELHO = 1,
    AZUL,
    VERDE,
    AMARELO,
    BRANCO,
    PRETO
};


enum Saidas {
    sucesso,
    erro_ao_sair,
    erro_de_leitura,
    erro_de_escrita
};


int main(int argc, char const *argv[]){
    Cores cor;
    Saidas saida;
    std::cout<<" Saida: "<< saida << std::endl;
    std::cout <<" A cor é: "<< cor << std::endl;
    return 0;
};

