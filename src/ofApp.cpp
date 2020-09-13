#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    lanes = floor(ofGetHeight() / 40.0);
    int laneY = 0;
    for (int i = 0; i < lanes; i++)
    {
        Car c(0, laneY);
        c.setLane(i);
        cars.push_back(c);
        laneY += 40;
    }
    state = Started;
}

//--------------------------------------------------------------
void ofApp::update()
{
    switch (state)
    {
    case NotStarted:
        break;
    case Started:

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
                    // cars[i].setDirection(1);
                    state = Finished;
                }
                else
                {
                    cars[i].setX(cars[i].getX() - delta);
                }
            }
        }
        break;

    case Finished:
        return;
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    for (int i = 0; i < lanes; i++)
    {
        cars[i].draw();
    }

    switch (state)
    {
    case NotStarted:
        break;
    case Started:
        break;
    case Finished:
        // Find winning lane
        int i = 0;
        while (cars[i].getX() > 0)
        {
            i++;
        }
        ofDrawBitmapString("Winner is on lane #" + to_string(i), 400, 400);

        break;
    }
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
