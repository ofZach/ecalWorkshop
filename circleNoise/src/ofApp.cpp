#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0,0,0);
    
    float time = ofGetElapsedTimef();
    for (int i = 0; i < 1000; i++){
        float angle = ofMap(i, 0, 1000, 0, TWO_PI);
        float radius = 250;
        float x = 400 + radius * cos(angle);
        float y = 400 + radius * sin(angle);
        
        float noiseAmt = ofNoise(cos(angle), sin(angle), time);
        
        ofSetColor(ofSignedNoise(noiseAmt*4.0) * mouseX + 127,
                   ofSignedNoise(noiseAmt*3.5) * mouseX + 127,
                   ofSignedNoise(noiseAmt*3.0) * mouseX + 127);
        ofDrawCircle(x,y,2 + noiseAmt*50.0);
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
