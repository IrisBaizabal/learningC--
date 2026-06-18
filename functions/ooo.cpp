#include <iostream>
#include <string>

void ooo_message(std::string date){
    std::cout << "Thank you for your email. \nI am currently out of the office and will be back "<< date << " \nI will respond as soon as I can upon my return." << std::endl;
}

int main(){
    ooo_message("Agust 1st, 2026");
}