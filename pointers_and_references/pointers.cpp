#include <iostream>
#include <string>

int main() {
  std::string tip1 = "🍎 Stay consistent: Even 10 minutes of daily practice adds up.";
  std::string tip2 = "✍️ Take notes: Writing things down helps concepts stick.";
  std::string tip3 = "🚀 Build small projects: Apply what you learn in simple, hands-on ways.";
  std::string tip4 = "👯 Join a community: Learning is easier (and way more fun) when you're not doing it alone.";

  std::string *ptip1 = &tip1;
  std::string *ptip2 = &tip2;
  std::string *ptip3 = &tip3;
  std::string *ptip4 = &tip4;

  std::cout << *ptip1 << std::endl;
  std::cout << *ptip2 << std::endl;
  std::cout << *ptip3 << std::endl;
  std::cout << *ptip4 << std::endl;

  
}