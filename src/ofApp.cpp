#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup()
{
        c1.setX(0);
        c1.setY(0);
}

//--------------------------------------------------------------
void ofApp::update()
{
        if (c1.getDirection() == 1)
        {
                // Car moving left to right, check reaching right border
                if (c1.getX() + 60 >= ofGetWidth())
                {
                        c1.setDirection(-1);
                }
                else
                {
                        c1.setX(c1.getX() + c1.getSpeed());
                }
        }
        else
        {
                // Car moving right to left
                if (c1.getX() <= 0)
                {
                        c1.setDirection(1);
                }
                else {
                        c1.setX(c1.getX() - c1.getSpeed());
                }
        }
}

//--------------------------------------------------------------
void ofApp::draw()
{

        //Car c1(0, 0);
        c1.draw();

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
