#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    ofSetColor(255);
    
    for (int j = 0; j < 100; j++){
        float amt = ofMap(j, 0, 100, 0, 1);
        for (int i = 0; i < 100; i++){
            float angle = ofMap(i, 0, 100, 0, TWO_PI);
            float radius = 250;
            float x = 400 + cos(angle) * radius;
            float y = 400 + sin(angle) * radius;
            ofPoint circlePt(x,y);
            ofPoint mouse(mouseX, mouseY);
            float distance = (circlePt - mouse).length();
            float strength = ofMap(distance, 0, 700, 1, 0, true);
            strength = powf(strength, 2.4);
            ofPoint dir = (circlePt - mouse).getNormalized();
            circlePt += dir * strength * 300 * amt;
            ofSetColor(amt * 255);
            ofDrawCircle(circlePt.x, circlePt.y, powf(amt, 2.0) * 10 + 3);
        }
    }
    
    
    
    
    
    
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
