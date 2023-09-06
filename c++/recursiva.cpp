#include <iostream>
#include <cstdlib>

int fatorial(int n){
    return (n <=1) ? 1 : n * fatorial(n - 1);
}

int fibonnaci(int n){
    return (n <= 1) ? 1 : fibonnaci(n - 1) + fibonnaci(n - 2);
}


int main(int argc, char **argv){
    if(argc > 1){
        int numero = atoi(argv[1]);
        //std::cout<< "O fatorial de" << numero << "eh: " << fatorial(numero) << std::endl;
        std::cout<< "O fibonnaci de "<< numero << " eh: " << fibonnaci(numero) << std::endl;
    }else{
        std::cout << "Digite um numero: ";
        int numero = 0;
        std::cin >> numero;
        std::cout<< "O fatorial de "<< numero <<" eh: " << fatorial(numero) << std::endl;
    }
    
    return 0;
}
