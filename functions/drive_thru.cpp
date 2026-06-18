#include <iostream>
#include <string>

void welcome(){
    std::cout << "Here's the menu:" << std::endl;
    std::cout << "1. 🍔 Cheeseburger" << std::endl;
    std::cout << "2. 🍟 Fries" << std::endl;
    std::cout << "3. 🥤 Soda" << std::endl;
    std::cout << "4. 🍦 Ice Cream" << std::endl;
    std::cout << "5. 🍪 Cookie" << std::endl;
    
}

int main(){
    welcome();
    welcome();
    return 0;
}