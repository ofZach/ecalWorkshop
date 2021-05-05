#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 7; i++){
        ofImage temp;
        imgs.push_back(temp);
        imgs.back().load("circular-0" + ofToString(i+1) + ".png");
    }
    
    for (int i = 0; i < 20; i++){
        particle p;
        p.setInitialCondition(ofRandom(200,600),
                              ofRandom(200, 600),
                              0, 0);
        particles.push_back(p);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
     for (int i = 0; i < particles.size(); i++){
         particles[i].radius = ofMap(sin(ofGetElapsedTimef() + i*0.3), -1, 1, 10, 150);
     }
    
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].resetForce();
    }
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].addAttractionForce(400,400, 2000, 0.3);
        particles[i].addRepulsionForce(mouseX, mouseY, 50, 3);
    }
    
    for (int i = 0; i < particles.size(); i++){
      for (int j = 0; j < i; j++){
          float amt = particles[i].radius + particles[j].radius;
          particles[i].addRepulsionForce(particles[j], amt, 3);
      }
    }
    
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].addDampingForce();
        particles[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (bBackground) ofBackground(0);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
//    float distance = ofDist(mouseX, mouseY, 400, 400);
//    int whichImage = ofMap(distance, 0, 400, 0, imgs.size()-1, true);
//
//    imgs[whichImage].draw(400,400);
//
    
    history.push_back(particles);
    if (history.size() > 30){
        history.erase(history.begin());
    }
    
    for (int i = 0; i < history.size(); i++){
        
        float brightness = ofMap(i, 0, history.size()-1, 0, 1);
        ofSetColor(255*brightness);
        
        ofPushMatrix();
        ofTranslate(0,ofMap(i, 0, history.size()-1, mouseX, 0));
        
        for (int j = 0; j < history[i].size(); j++){
         
            int whichImage = ofMap(history[i][j].radius, 10, 150, 0, imgs.size()-1, true);
            
            imgs[whichImage].draw(history[i][j].pos.x,
                                          history[i][j].pos.y,
                                          history[i][j].radius*2,
                                    history[i][j].radius*2);
            
        }
        ofPopMatrix();
    }
    
//    for (int i = 0; i < particles.size(); i++){
//
//        int whichImage = ofMap(particles[i].radius, 10, 150, 0, imgs.size()-1, true);
//
//
//
//        imgs[whichImage].draw(particles[i].pos.x,
//                              particles[i].pos.y,
//                              particles[i].radius*2,
//                              particles[i].radius*2);
////        ofDrawCircle(particles[i].pos,
////                     particles[i].radius *0.5);
//    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        ofSetBackgroundAuto(false);
        bBackground = false;
    } else if (key == 'b'){
        bBackground = true;
        ofSetBackgroundAuto(true);
        
    }
    
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
