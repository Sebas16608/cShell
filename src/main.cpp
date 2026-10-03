#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main(){
    bool prompt = true;
    std::string comando;

    while (prompt){
        std::cout<<"$ ";
        std::cin >> comando;

        if (comando == "exit") {
            prompt = false;
        }
        else if (comando == "pwd") {
            std::cout<<fs::current_path().string()<<std::endl;
        }

        else if (comando == "ls") {
            for (const auto& entrada: fs::directory_iterator(".")) {
                std::cout<<entrada.path().filename().string()<<std::endl;
            }
        }
    }
}
