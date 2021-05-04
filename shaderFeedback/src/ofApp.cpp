#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
    
    
    fbo.allocate(800, 800);
    fbo2.allocate(800,800);
    
    fbo2.begin();
    ofClear(0,0,0,255);
    fbo2.end();
    
    fbo.begin();
    ofClear(0,0,0,255);
    fbo.end();
    
    
    shader.load("", "shader.frag");
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    if (ofGetFrameNum() % 60 == 0){
        shader.load("", "shader.frag");
    }
    
    if (ofGetFrameNum() % 30 == 0){
        color.set(ofRandom(0,255),
                  ofRandom(0,255),
                  ofRandom(0,255));
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    fbo.begin();
    ofClear(0,0,0,255);
    ofSetColor(255);
    fbo2.draw(0,0);
    ofSetColor(color);
    ofDrawCircle(400,400,250);
    fbo.end();
    ofSetColor(255);
    
    fbo2.begin();
    shader.begin();
    shader.setUniform1f("time", ofGetElapsedTimef());
    shader.setUniform2f("mousePos", mouseX, mouseY);
    shader.setUniformTexture("circle", fbo.getTexture(), 1);
    ofDrawRectangle(0,0, 800,800);
    shader.end();
    fbo2.end();
    
    ofSetColor(255);
    fbo2.draw(0,0);
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
