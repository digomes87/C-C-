#include <iostream>

void funcao(){
    std::cout << "Funcao sem parametros!" << std::endl;
}

int funcao(int x){
    return x;
}

int main(int argc, char *argv[]){
    funcao();
    std::cout << "Funcao com parametros: " << funcao(10) << std::endl;   
    return 0;
}
