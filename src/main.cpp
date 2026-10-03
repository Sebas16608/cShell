#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

namespace fs = std::filesystem;

int main(){
    bool prompt = true;
    std::string command;

    std::vector<std::string> comando = {"ls", "pdw", "exit"};

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
