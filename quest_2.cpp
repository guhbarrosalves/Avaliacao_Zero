#include <iostream> 
#include <cstddef> 

size_t fatorial(size_t num){ 
    if(num == 0 or num == 1) return 1; 
    
    int i{}; for(i=1; num > 1; num--){ 
        i = i * num; 
    
    } 
    
    return i; 

} 

int main(){ 
    
    size_t num{}; 
    
    std::cin >> num; 
    std::cout << fatorial(num) << '\n'; 
    
    return 0; 
}
