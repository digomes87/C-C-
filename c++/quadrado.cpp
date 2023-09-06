#include <iostream>

int quadrado(int x, int c){
    double quandrado =  x * x;

    std::cout << "O quadrado de " << x << " é " << quandrado << std::endl;
    return 0;
}


int main(){
    quadrado(23, 4);

    return 0;
}

