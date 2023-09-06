#include <iostream>

int main(){
    double valor = 3.14;
    int numero = valor;

    char letra = 'c';

    std::cout << "O valor de numero é: " << numero << std::endl;
    std::cout << "O valor de valor é: " << valor << std::endl;

    numero  = letra;
    std::cout << "O valor de letra é: " << letra << std::endl;
    std::cout << "O valor de numero é: " << numero << std::endl;
    return 0;
}
