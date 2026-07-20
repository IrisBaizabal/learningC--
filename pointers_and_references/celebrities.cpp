// Instructions
// Believe it or not, a ton of famous celebrities changed their names.

// Look up a few of your favorite actors or singers and see if they changed their names.

// Store them in reference variables.

// Now change the original value and output both the original and references. Are they the same?

#include <iostream>

int main(){
    std::string female_celebrity = "Zendaya Maree Stoermer Coleman";
    std::string &zendaya = female_celebrity;

    std::cout << zendaya << std::endl;
    std::cout << female_celebrity << std::endl;

}