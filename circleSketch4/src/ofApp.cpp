#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    lines.clear();
    
    float time = ofGetElapsedTimef();
    
    for (int z = 0; z < 1250; z++){
    ofPolyline line;
    line.addVertex(0,0);
    line.addVertex(800,0);
    line.addVertex(800,800);
    line.addVertex(0,800);
    line.close();
    
    ofPoint pt = line.getPointAtPercent(ofRandom(0,1));
    ofPoint pt2 = line.getPointAtPercent(ofRandom(0,1));
    
    ofPolyline temp;
    temp.addVertex(pt);
    temp.addVertex(pt2);
    
    ofPoint closest = temp.getClosestPoint( ofPoint(mouseX,mouseY) );
    
    if ( (closest - ofPoint(mouseX,mouseY)).length() > ofMap(sin(time), -1, 1, 0, 250) ){
        lines.push_back(temp);
    }
    }
    
    ofSetColor(255, 255, 255, 255);
    for (int i = 0; i < lines.size(); i++ ){
        lines[i].draw();
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

//    ofPolyline temp;
//    temp.addVertex(ofRandom(0,800),
//                   ofRandom(0,800));
//    temp.addVertex(ofRandom(0,800),
//    ofRandom(0,800));
//    lines.push_back(temp);
    
    
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
