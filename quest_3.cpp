#include <iostream>
#include <array>

int main(){

    std::array<int, 5> lista;

    for(int i=0; i<5; i++){
        std::cin >> lista[i];
    }

    int soma{};

    for(int i=0; i<5; i++){
        soma += lista[i];
    }

    std::cout << "A soma dos valores é: " << soma << '\n';
    
    return 0;
}