//Celsius to Fahrenheit
#include <iostream>

double conversion(int celsius){
    double fahrenheit = (celsius*1.8) + 32;
    return fahrenheit;
}

int main(){
    int celsius;
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;
    
    std::cout << "Fahrenheit: " << conversion(celsius) << std::endl;
}