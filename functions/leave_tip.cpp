#include <iostream>

double tips_menu(){
    double tip;
    std::cout << "Would you like to leave a tip? " << std::endl;
    std::cout << "15%       20%          25%"<<std::endl;
    std::cin >> tip;
    return tip;
}

double tips_calculator(double amount, double tip){
    double total = ((amount *(tip/100)) + amount);
    return total;

}

int main(){
    double amount;
    std::cout << "Enter the final amount: ";
    std::cin >> amount;
    double tip=tips_menu();
    std::cout << "Final amount with tip: "<< tips_calculator(amount, tip);
    return 0;
}

