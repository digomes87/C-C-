#include <iostream>

int main(int argc, char *argv[]){
    std::string * ponteiro = nullptr;
    ponteiro = new std::string[8];
    std::cout << "Digite algo: ";
    std::getline(std::cin, (*ponteiro));  
    std::cout << "Voce digitou: \e[33;1m" << (*ponteiro) << "\e[m" << std::endl;
    delete[] ponteiro;
    ponteiro = NULL;
    return 0;
}



