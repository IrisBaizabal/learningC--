#include <iostream>

class Cat{
    public:
        std::string name;
        std::string breed;
        int age;
        bool rescued;
        int mood;
        int hunger;

        Cat(std::string n, std::string b,int a, bool r, int m, int h){
            name = n;
            breed = b;
            age = a;
            rescued = r;
            mood = m;
            hunger = h;
        }

        void feed(){
            hunger++;
        };

        void play(){
            mood++;
        };

        void status(){
            std::cout << name << " is a " << age << " years old " << breed << " cat";
            if (rescued == true){
                std::cout << ". It was rescued";
            } else{
                std::cout << "It was not rescued";
            }
            std::cout << ". Its hunger is: " << hunger << " and his mood is: " << mood <<std::endl;
            std::cout << "(For the hunger, 0 = hungry and 10 = full. For the mood, 0 = sad and 10 = very happy)"<<std::endl;
        };


};

int main(){
    Cat garfield("Garfield", "Orange Tabby", 48, true, 2, 0);
    Cat puss_in_boots("Puss in Boots", "Ginger Tabby", 40, true, 8, 8);

    std::cout << "The cats are: " << std::endl;
    garfield.status();
    puss_in_boots.status();

    int option;
    std::cout << "Select one of the following options: " << std::endl;
    std::cout << "1. Feed a pet \n2. Play with a pet \n3. Check status" <<std::endl;
    std::cout << "Select 1 2 or 3: ";
    std::cin >> option;

    if (option == 1){
        int gato;
        std::cout<< "Select a cat to feed: \n1. Garfield \n2. Puss in boots"<<std::endl;
        std::cin >> gato;
        if (gato == 1){
            garfield.feed();
            std::cout << "Garfield fed"<<std::endl;
        }else if (gato == 2){
            puss_in_boots.feed();
            std::cout << "Puss in boots fed"<<std::endl;
        }else{
            std::cout << "Option not valid"<<std::endl;
        }
        
    }else if (option == 2){
        int gato;
        std::cout<< "Select a cat to play: \n1. Garfield \n2. Puss in boots"<<std::endl;
        std::cin >> gato;
        if (gato == 1){
            garfield.play();
            std::cout << "You are playinh with Garfield"<<std::endl;
        }else if (gato == 2){
            puss_in_boots.play();
            std::cout << "You are playing with Puss in boots"<<std::endl;
        }else{
            std::cout << "Option not valid"<<std::endl;
        }
    }else if (option == 3){
        int gato;
        std::cout<< "Select a cat to check status: \n1. Garfield \n2. Puss in boots"<<std::endl;
        std::cin >> gato;
        if (gato == 1){
            garfield.status();
            
        }else if (gato == 2){
            puss_in_boots.status();
        
        }else{
            std::cout << "Option not valid"<<std::endl;
        }
    }else{
        std::cout << "Option not valid"<<std::endl;
    }

}