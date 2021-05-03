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
    //ofDrawCircle(400,400,250);
    
    ofPolyline line;
    
    for (int i = 0; i < 100; i++){
        float angle = ofMap(i, 0, 100, 0, TWO_PI);
        float radius = 250;
        //radius += ofRandom(-mouseX, mouseX);
        float x = 400 + cos(angle) * radius;
        float y = 400 + sin(angle) * radius;
        line.addVertex(x,y);
        //ofDrawCircle(x,y,3);
    }
    line.setClosed(true);
    
    for (int i = 0; i < line.size(); i++){
        line[i].x += ofSignedNoise( line[i].x*0.1, line[i].y*0.1, mouseX*0.3)*mouseY;
        
    }
    
    
    
    
    ofSetLineWidth(2);
    
    //line.draw();
    
    ofBeginShape();
    for (int i = 0; i < line.size(); i++){
        ofVertex(line[i]);
    }
    ofEndShape();
    
    
    
    
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
