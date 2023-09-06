int cpf_validacao(){
    std::string cpf = "015.145.960-12";
    std::cout << "CPF antes de remover os pontos e traço: " << cpf << std::endl;
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    std::cout << "CPF depois de remover os pontos e traço: " << cpf << std::endl;
    return 0;
}
