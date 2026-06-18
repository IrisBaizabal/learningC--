#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> cart = {"🍕 Pepperoni pizza", "🥗 Garden salad", "🥤 Diet Coke"};
    cart.push_back("🥫 Marinara sauce");
    cart.pop_back();

    std::cout <<"Upadted vector: "<< cart[0] << " " << cart[1] << cart[2] <<std::endl;
    std::cout <<"Size: " << cart.size()<<std::endl;

}
