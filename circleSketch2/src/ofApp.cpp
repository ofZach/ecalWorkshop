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
    
    
    for (int j = 0; j < 20; j++){
        ofPolyline line;
        float radius = ofMap(j, 0, 20, 10, 250);
        for (int i = 0; i < 100; i++){
            float angle = ofMap(i, 0, 100, 0, TWO_PI);
            float x = 400 + cos(angle) * radius;
            float y = 400 + sin(angle) * radius;
            line.addVertex(x,y);
        }
        line.setClosed(true);
        
        
        for (int i = line.size()*0.5; i < line.size()*0.75; i++){
            line[i].x += mouseX;
            line[i].y += mouseY;
        }
        
        
        ofSetLineWidth(2);
        line.draw();
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
