#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(int argc, char **argv){
    std::string linha;
    bool numero {false};
    std::string param;
    int i = 1;

    if(argc > 2){
        param = argv[1];
        if(param == "-n"){
            numero = true;
        }
        else if(param == "-a"){
            std::ofstream arquivoOut("texto.txt", std::ios::app); // Abre o arquivo em modo de anexação
            if(arquivoOut.is_open()){
                // Combina todos os argumentos após o "-a" em uma única string
                std::string fraseToAdd = "";
                for(int j = 2; j < argc; j++){
                    fraseToAdd += argv[j];
                    if(j < argc - 1) fraseToAdd += " ";  // Adiciona espaços entre as palavras, exceto após a última palavra
                }
                
                arquivoOut << fraseToAdd << std::endl;  // Anexa a frase ao arquivo
                arquivoOut.close();
                return 0; // Saia do programa após anexar
            }else{
                std::cout << "Não foi possível abrir o arquivo para anexação" << std::endl;
                return 1; // Erro
            }
        }
    }

    std::fstream arquivo("texto.txt");

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            if(numero){
                std::cout << std::setw(5) << i << " " << linha << std::endl;
            }
            else{
                std::cout << linha << std::endl;
            }
            i++;
        }
        arquivo.close();
    }else{
        std::cout << "Não foi possível abrir o arquivo" << std::endl;
    }

    return 0;
}
