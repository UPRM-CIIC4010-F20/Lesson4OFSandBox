#include "ofApp.h"

#include "Car.h"

void Car::setup()
{
}

void Car::draw()
{
  // ofSetBackgroundColor(OF_CONSOLE_COLOR_WHITE);
  // ofSetColor(OF_CONSOLE_COLOR_BLACK);
  ofDrawRectangle(xPos + 0, yPos + 10, 60, 10);
  ofDrawCircle(xPos + 15, yPos + 25, 5);
  ofDrawCircle(xPos + 45, yPos + 25, 5);
  ofDrawLine(xPos + 10, yPos + 10, xPos + 20, yPos + 0);
  ofDrawLine(xPos + 20, yPos + 0, xPos + 40, yPos + 0);
  ofDrawLine(xPos + 40, yPos + 0, xPos + 50, yPos + 10);
  // ofSetColor(1);
  ofDrawBitmapString(to_string(lane),xPos + 1, yPos+5);
  // ofSetColor(0);
  

}

void Car::update()
{
}
