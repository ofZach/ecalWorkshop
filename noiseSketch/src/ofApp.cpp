#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    fbo.allocate(800,800);
    
    ofSetCircleResolution(100);
    
    shader.load("", "shader.frag");
    
}

//--------------------------------------------------------------
void ofApp::update(){

    if (ofGetFrameNum() % 60 == 0) shader.load("", "shader.frag");
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    fbo.begin();
    ofClear(0,0,0,255);
    ofSetColor(255);
    ofDrawCircle(400,400,250);
    fbo.end();
    //fbo.draw(0,0);
    
    shader.begin();
    shader.setUniformTexture("circle", fbo.getTexture(), 0);
    shader.setUniform1f("time", ofGetElapsedTimef());
    ofDrawRectangle(0,0,800,800);
    shader.end();
    
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
