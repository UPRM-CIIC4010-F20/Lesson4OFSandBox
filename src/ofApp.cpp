#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
        int xPos = 0;
        int yPos = 0;
		ofDrawRectangle(xPos+0,yPos+10,60,10);
		ofDrawCircle(xPos+15,yPos+25,5);
		ofDrawCircle(xPos+45,yPos+25,5);
		ofDrawLine(xPos+10,yPos+10,xPos+20,yPos+0);
		ofDrawLine(xPos+20,yPos+0,xPos+40,yPos+0);
		ofDrawLine(xPos+40,yPos+0,xPos+50,yPos+10);

        xPos = ofGetWidth() - 60;
        yPos = ofGetHeight() - 40;
		ofDrawRectangle(xPos+0,yPos+10,60,10);
		ofDrawCircle(xPos+15,yPos+25,5);
		ofDrawCircle(xPos+45,yPos+25,5);
		ofDrawLine(xPos+10,yPos+10,xPos+20,yPos+0);
		ofDrawLine(xPos+20,yPos+0,xPos+40,yPos+0);
		ofDrawLine(xPos+40,yPos+0,xPos+50,yPos+10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
