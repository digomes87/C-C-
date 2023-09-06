#include <iostream>
#include <variant>
#include <vector>

/*
    Usar variant é um conceito avançado de C++.
    Foi implementado no C++17.
*/

int main(){
    using Mixed = std::variant<int, double, char, std::string>;
    std::vector<Mixed> arr = {1, 2.0, 'a', "3.2"};
    for(const auto& item : arr){
        std::visit([](auto&& arg){
            std::cout << arg << std::endl;
        }, item);
    }

    return 0;
}
