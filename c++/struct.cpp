// struct é utilizado em c e nao em c++

#include <iostream>
#include <string>


// struct ainda funciona em c++ mas nao é recomendado
struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};


// o recomendado em C++ é utilizar class
class PessoaClass{
    public:
        std::string nome;
        int idade;
        float altura;
};

int main(int argc, char *argv[]){
    Pessoa p1;
    p1.nome = "Joao";
    p1.idade = 20;
    p1.altura = 1.75;

    std::cout << "Nome: " << p1.nome << std::endl;
    std::cout << "Idade: " << p1.idade << std::endl;
    std::cout << "Altura: " << p1.altura << std::endl;

    std::cout<< "\nUtilizando classe no c++ " << std::endl;

    PessoaClass p2;
    p2.nome = "Maria";
    p2.idade = 18;
    p2.altura = 1.65;

    std::cout << "Nome: " << p2.nome << std::endl;
    std::cout << "Idade: " << p2.idade << std::endl;
    std::cout << "Altura: " << p2.altura << std::endl;


    return 0;
}
