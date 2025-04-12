# Drone Testing Application

This is a C++ simulation of a drone that moves within a 5x5 testing area. Commands include:

- `LAUNCH X,Y,DIRECTION`
- `FLY`
- `LEFT`
- `RIGHT`
- `STATUS`

### How to Compile

```bash
g++ main.cpp Drone.cpp -o drone_app
