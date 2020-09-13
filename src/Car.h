#pragma once

class Car {
    private:
    int xPos;
    int yPos;
    int direction;
    int speed; // Pixels per frame

    public:
    Car(int x, int y) { this->xPos = x; this->yPos = y; this->direction = 1; speed = 5; }

    int getX() { return xPos; }
    int getY() { return yPos; }
    int getDirection() { return direction; }
    int getSpeed() { return speed; }

    void setX(int x) { xPos = x; }
    void setY(int y) { yPos = y; }
    void setDirection(int d) { direction = d; }
    void setSpeed(int s) { speed = s; }

    void setup();
    void draw();
    void update();

};
