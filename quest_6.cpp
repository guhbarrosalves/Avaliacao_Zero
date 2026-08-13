#include <iostream>

bool Primo(size_t num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    
    int numero{};

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if(Primo(numero))
        std::cout << "O número é primo\n";

    else{
        std::cout << "O número não é primo\n";
    }
    
    
    return 0;
}