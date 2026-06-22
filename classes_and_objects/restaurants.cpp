#include <iostream>
#include <string>

class Restaurant{
    public:
        std::string name;
        std::string category;
        double rating;
        std::string price;
        bool delivery;
};

int main(){
    Restaurant peter_luger;
    Restaurant la_birrieria;
    Restaurant chilaquiles_tec;


    peter_luger.name = "Peter Luger Steak House";
    peter_luger.category = "American";
    peter_luger.rating = 4.4;
    peter_luger.price = "$$$$";
    peter_luger.delivery = false;

    la_birrieria.name = "La birrieria Monterrey";
    la_birrieria.category = "Mexican";
    la_birrieria.rating = 4.2;
    la_birrieria.price = "$$$";
    la_birrieria.delivery = true;
    
    chilaquiles_tec.name = "Chilaquiles Tec";
    chilaquiles_tec.category = "School";
    chilaquiles_tec.rating = 4.0;
    chilaquiles_tec.price = "$$";
    chilaquiles_tec.delivery = true;
    
}