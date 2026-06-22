#include <iostream>

class Car{
    public:
        std::string brand;
        std::string model;
        int year;
        bool classic;

        Car(std::string b, std::string m, int y, bool c){
            brand = b;
            model = m;
            year = y;
            classic = c;
        }
};

int main(){
    Car mustang("Ford", "Mustang", 1961, true);
    Car jaguar("Jaguar", "E-Type", 1961, false);
}