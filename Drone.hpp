
#ifndef DRONE_HPP
#define DRONE_HPP

#include <string>

enum class Direction { NORTH, EAST, SOUTH, WEST };

class Drone {
private:
    int x, y;
    Direction facing;
    bool inAir;

    bool isValidPosition(int newX, int newY);

public:
    Drone();

    void launch(int x, int y, const std::string& directionStr);
    void fly();
    void left();
    void right();
    std::string status() const;
};

#endif
