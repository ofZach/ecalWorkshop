#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
    
    
    grabber.setup(1280, 720);
    
    fbo.allocate(800, 800);
    
    
    shader.load("", "shader.frag");
    
    img.load("rock.jpg");
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    if (ofGetFrameNum() % 60 == 0){
        shader.load("", "shader.frag");
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    fbo.begin();
    ofClear(0,0,0,255);
    ofSetColor(255);
    ofDrawCircle(400,400,250);
    fbo.end();
    
    ofSetColor(255);
    fbo.draw(mouseX, mouseY);
    
    
//    //img.draw(0,0);
//    ofSetColor(255);
//
    shader.begin();
    shader.setUniform1f("time", ofGetElapsedTimef());
    shader.setUniform2f("mousePos", mouseX, mouseY);
    shader.setUniformTexture("rock", img.getTexture(), 0);
    shader.setUniformTexture("circle", fbo.getTexture(), 1);
    ofDrawRectangle(0,0, 800,800);
    //ofDrawCircle(400,400,250);
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
