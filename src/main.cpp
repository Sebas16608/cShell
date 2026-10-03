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

        for (int i = 0; i < comando.size(); i++) {
            if (command == "ls" && comando[i] == "ls") {
                std::cout<<"prueba"<<std::endl;
            } else if (command == "pwd" && comando[i] == "pwd") {
                std::cout<<fs::current_path()<<std::endl;
            }
        }

    }
}
