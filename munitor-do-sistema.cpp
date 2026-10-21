#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <iomanip>

int main(){
    while (true) {
        std::cout << "\033[2J\033[H";
        std::ifstream RamToTalMunitor("/proc/meminfo");
        std::string linha;
        
        while (std::getline(RamToTalMunitor, linha)) {
            if(linha.find("MemTotal") == 0){

                size_t pos = linha.find(':');
                std::string texto = linha.substr(pos + 1);
                long long numero = std::stoll(texto);
                double ram = numero / (1024.0 * 1024);

                std::cout << "RAM total: " << std::fixed << std::setprecision(2) << ram << " GiB" << std::endl; 
                break;
            }
        }
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}
