#include <iostream>

auto temp_fahrenheit(double temp_celsius){
    return 1.8 * temp_celsius + 32;
}

auto temp_celsius(double temp_fahrenheit){
    return (temp_fahrenheit - 32) / 1.8;
}

int main(){

    int value{};
    char temp{};

    std::cout << "Digite a escala que está (F ou C). Depois digite a temperatura: ";
    std::cin >> temp;
    
    switch(temp){
        case 'C': std::cin >> value; std::cout << "A temperatura é: " << temp_fahrenheit(value) << " °F\n"; break;
        case 'F': std::cin >> value; std::cout << "A temperatura é: " << temp_celsius(value) << " °C\n"; break;
    }


    return 0;
}