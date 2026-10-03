#include <iostream>

int main(){
    bool prompt = true;
    std::string command;

    while (prompt){
        std::cout<<"$ ";
        std::cin >> command;

        if (command == "exit") {
            prompt = false;
        }
    }
}
