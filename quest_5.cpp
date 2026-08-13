#include <iostream>
#include <string>


int main(){
    
    std::string name{};

    std::getline(std::cin >> std::ws, name);

    std::cout << "A string possui " << name.length() << " caracteres\n";
    
    return 0;
}