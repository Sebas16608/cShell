#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main(){
    bool prompt = true;
    std::string command;

    while (prompt){
        std::cout<<"$ ";
        std::cin >> command;

        if (command == "exit") {
            prompt = false;
        } else if (command == "pwd"){
            std::cout<<fs::current_path()<<std::endl;;
        }
    }
}
