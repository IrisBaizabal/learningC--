#include <iostream>

void reviewAction(const std::string &name, const std::string* extraCommment){
    if (extraCommment == nullptr){
        std::cout<< "Thanks for the review, "<< name << std::endl;
    } else{
        std::cout<<"Thanks for the review, "<< name <<" The team will get back to you if you had any questions.\n";
    }
}
int main(){
    reviewAction("Maria", nullptr);
    return 0;
}