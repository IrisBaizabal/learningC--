#include <iostream>

class WealthyFamily{
    private:
        int networth;
    public:
        std::string name;
};

int main(){
    WealthyFamily vasquez_baizabal;
    vasquez_baizabal.name = "Vasquez Baizabal";
    std::cout << vasquez_baizabal.name <<":" << std::endl;
    std::cout <<"We prefer not to discuss such matters.";
    return 0;
}