#include <iostream>
#include <vector>

int main(){
    std::vector<int> lemonade ={25, 28, 40, 85, 76};
    std::vector<double> sales ={75.50, 89.25, 60.00, 102.45, 95.10};

    std::cout << "Lemonade last element: " << lemonade[4] << std::endl;
    std::cout << "Sales last element: " << sales[4] << std::endl;

    return 0;

}