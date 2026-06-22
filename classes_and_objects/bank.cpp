#include <iostream>

class BankAccount{
    public:
        std::string name;
        int account_id;
        std::string account_type;
        double balance;

        double deposit(double amount){
            balance += amount;
            return balance;
        };

        void withdraw(double amount){
            balance -= amount;
        };
        void display_balance(){
            std::cout << "Current balance: $" << balance <<std::endl;
        };

};

int main(){
     BankAccount person1;
    person1.name = "Alberto Perez";
    person1.account_id = 243567;
    person1.account_type = "Checkings";
    person1.balance = 120;

    person1.deposit(96);
    person1.withdraw(25);
    person1.display_balance();

    return 0;
}