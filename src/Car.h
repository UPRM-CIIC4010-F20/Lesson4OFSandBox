#pragma once

class Car {
    private:
    int xPos;
    int yPos;
    int direction;
    int speed; // Pixels per frame
    int lane;

    public:
    Car(int x, int y) { this->xPos = x; this->yPos = y; this->direction = 1; speed = 5; lane =0;}

    int getX() { return xPos; }
    int getY() { return yPos; }
    int getDirection() { return direction; }
    int getSpeed() { return speed; }
    int getLane() { return lane; }


    void setX(int x) { xPos = x; }
    void setY(int y) { yPos = y; }
    void setDirection(int d) { direction = d; }
    void setSpeed(int s) { speed = s; }
    void setLane(int l) { lane = l; }

    void setup();
    void draw();
    void update();

};
