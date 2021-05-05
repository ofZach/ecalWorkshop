#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int j = 0; j < 10; j++){
        ofMesh m;
        m.setMode(OF_PRIMITIVE_TRIANGLE_FAN);
        m.addVertex(ofPoint(mouseX, mouseY));
       
        ofPoint camCenter(320 , 240);
        float texRadius = 150 + 50 * sin(ofGetElapsedTimef() + j*0.2);
        m.addTexCoord(grabber.getTexture().getCoordFromPoint(camCenter.x, camCenter.y));
        //m.addColor(ofColor::white);
        for (int i = 0; i < 100; i++){
            float angle = ofMap(i,0,99, 0, TWO_PI);
            float x = mouseX + ofMap(j, 0, 10,200, 30)*cos(angle);
            float y = mouseY + ofMap(j, 0, 10,200, 30)*sin(angle);
            m.addVertex(ofPoint(x,y));
            //m.addColor(ofColor::blue);
            
           float x2 = camCenter.x + texRadius*cos(angle);
           float y2 = camCenter.y + texRadius*sin(angle); m.addTexCoord(grabber.getTexture().getCoordFromPoint(x2, y2));
            
        }
        grabber.getTexture().bind();
        m.draw();
        grabber.getTexture().unbind();
    }
    
//    ofMesh m;
//    m.setMode(OF_PRIMITIVE_TRIANGLES);
//    m.addVertex(ofPoint(100,100));
//    m.addVertex(ofPoint(100,400));
//    m.addVertex(ofPoint(400,400));
//
//    ofPoint pta = ofPoint(100, 100);
//    ofPoint ptb = ofPoint(100, 400);
//    ofPoint ptc = ofPoint(400, 400);
//    ofPoint center = (pta + ptb + ptc) / 3.0;
//    float scale = sin(ofGetElapsedTimef())*2.0 + 2.0;
//    pta = center + (pta - center)*scale;
//    ptb = center + (ptb - center)*scale;
//    ptc = center + (ptc - center)*scale;
//
//
//    m.addTexCoord( grabber.getTexture().getCoordFromPoint(pta.x, pta.y) );
//    m.addTexCoord( grabber.getTexture().getCoordFromPoint(ptb.x, ptb.y) );
//    m.addTexCoord( grabber.getTexture().getCoordFromPoint(ptc.x, ptc.y) );
//
//    grabber.getTexture().bind();
//    m.draw();
//    grabber.getTexture().unbind();
    
    //grabber.draw(0,0);
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
