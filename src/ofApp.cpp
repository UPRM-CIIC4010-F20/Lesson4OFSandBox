#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup()
{
        lanes = floor(ofGetHeight() / 40.0);
        int lane = 0;
        for (int i = 0; i < lanes; i++)
        {
                Car c(0,lane);
                cars.push_back(c);
                lane += 40;
        }
}

//--------------------------------------------------------------
void ofApp::update()
{
        for (int i = 0; i < lanes; i++)
        {
                int delta = round(ofRandom(1) * cars[i].getSpeed());
                if (cars[i].getDirection() == 1)
                {
                        // Car moving left to right, check reaching right border
                        if (cars[i].getX() + 60 >= ofGetWidth())
                        {
                                cars[i].setDirection(-1);
                        }
                        else
                        {
                                cars[i].setX(cars[i].getX() + delta);
                        }
                }
                else
                {
                        // Car moving right to left
                        if (cars[i].getX() <= 0)
                        {
                                cars[i].setDirection(1);
                        }
                        else
                        {
                                cars[i].setX(cars[i].getX() - delta);
                        }
                }
        }
}

//--------------------------------------------------------------
void ofApp::draw()
{
        for (int i = 0; i < lanes; i++)
        {
                cars[i].draw();
        }

        //Car c1(0, 0);

        Car c2(ofGetWidth() - 60, ofGetHeight() - 40);
        c2.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}
