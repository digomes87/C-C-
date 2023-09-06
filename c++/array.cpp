#include <iostream>

int main(){
    int numeros[]= {2,3,4,5,23,5,6,'a', true};
    int length = sizeof(numeros) / sizeof(numeros[0]);

    for(int i = 0; i < length; i++){
        std::cout << "O valor de numeros[" << i << "] é: " << numeros[i] << std::endl;
    }
    return 0;
}
