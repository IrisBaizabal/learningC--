#include <iostream>
#include <string>

int main(){
    int age;
    double money;
    char email;
    std::string best_friend;

    std::cout << &age << std::endl;
    std::cout << &money << std::endl;
    std::cout << &email << std::endl;
    std::cout << &best_friend << std::endl;

    return 0;
}