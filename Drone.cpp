
#include "Drone.hpp"
#include <iostream>
#include <sstream>

Drone::Drone() : x(0), y(0), facing(Direction::NORTH), inAir(false) {}

bool Drone::isValidPosition(int newX, int newY) {
    return newX >= 0 && newX < 5 && newY >= 0 && newY < 5;
}

void Drone::launch(int x, int y, const std::string& directionStr) {
    Direction dir;
    if (directionStr == "NORTH") dir = Direction::NORTH;
    else if (directionStr == "EAST") dir = Direction::EAST;
    else if (directionStr == "SOUTH") dir = Direction::SOUTH;
    else if (directionStr == "WEST") dir = Direction::WEST;
    else return;

    if (isValidPosition(x, y)) {
        this->x = x;
        this->y = y;
        this->facing = dir;
        this->inAir = true;
    }
}

void Drone::fly() {
    if (!inAir) return;
    int dx = 0, dy = 0;
    switch (facing) {
        case Direction::NORTH: dy = -1; break;
        case Direction::SOUTH: dy = 1; break;
        case Direction::EAST:  dx = 1; break;
        case Direction::WEST:  dx = -1; break;
    }
    if (isValidPosition(x + dx, y + dy)) {
        x += dx;
        y += dy;
    }
}

void Drone::left() {
    if (!inAir) return;
    facing = static_cast<Direction>((static_cast<int>(facing) + 3) % 4);
}

void Drone::right() {
    if (!inAir) return;
    facing = static_cast<Direction>((static_cast<int>(facing) + 1) % 4);
}

std::string Drone::status() const {
    if (!inAir) return "Drone is not in the air.";
    std::string dir;
    switch (facing) {
        case Direction::NORTH: dir = "NORTH"; break;
        case Direction::SOUTH: dir = "SOUTH"; break;
        case Direction::EAST:  dir = "EAST"; break;
        case Direction::WEST:  dir = "WEST"; break;
    }
    std::ostringstream out;
    out << x << "," << y << "," << dir;
    return out.str();
}
