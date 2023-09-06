#include <iostream>
#include <string>




int main() {

    std::string cantores[] = {"Elvis Presley", "Michael Jackson", "Bob Dylan", "Frank Sinatra", "Freddie Mercury"};

    // auto é uma palavra reservada que facilita a leitura de um array
    // com ele nao preciso informar a posicao do array
    for(auto i : cantores) {
        std::cout << i << std::endl;
    }


    int i = 0;
    std::string resposta;

    while (true) {
        int j = 0;
        while (j < 10) {
            std::cout << i << std::endl;
            i++;
            j++;
        }

        std::cout << "Quer contar mais? (Digite 'Nao' ou 'q' para parar): ";
        std::getline(std::cin, resposta);

        if (resposta == "Nao" || resposta == "q") {
            break;  // Sai do loop externo
        }
    }

    return 0;
}
