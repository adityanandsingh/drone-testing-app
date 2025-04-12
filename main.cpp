
#include "Drone.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main() {
    Drone drone;
    std::string line;

    std::cout << "Enter drone commands (CTRL+D to finish):" << std::endl;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        std::string command;
        iss >> command;

        if (command == "LAUNCH") {
            std::string rest;
            std::getline(iss, rest);
            int x, y;
            std::string dir;
            char comma;
            std::istringstream args(rest);
            args >> x >> comma >> y >> comma >> dir;
            drone.launch(x, y, dir);
        } else if (command == "FLY") {
            drone.fly();
        } else if (command == "LEFT") {
            drone.left();
        } else if (command == "RIGHT") {
            drone.right();
        } else if (command == "STATUS") {
            std::cout << drone.status() << std::endl;
        }
    }

    return 0;
}
