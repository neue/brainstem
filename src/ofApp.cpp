#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("BrainStem");
    ofSetFrameRate(60);
    ofBackground(245, 245, 245);
    radius = 40;
    ofFill();
    col1.set(255,255,255);
    col2.set(255,255,255);
    col3.set(255,255,255);
    col4.set(255,255,255);
    col5.set(255,255,255);
    col6.set(255,255,255);
    col7.set(255,255,255);
    col8.set(255,255,255);
    col9.set(255,255,255);
    col10.set(255,255,255);
    timerReached = false;
    startTime = ofGetElapsedTimeMillis();
    endTime = 1000;
    orange1.set(255, 131, 35);
    orange2.set(255, 157, 69);
    orange3.set(255, 183, 118);
    orange4.set(255, 207, 165);
    orange5.set(255, 232, 210);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    float timer = ofGetElapsedTimeMillis() - startTime;
    if(timer >= endTime && !timerReached) {
        startTime = ofGetElapsedTimeMillis();
        endTime = 1500;
        maxPid =  ofToInt(ofSystem("/brainmax"));
        topPids = ofSystem("/brainscan");
        ofLog() << topPids;
        vector<string> c = ofSplitString(topPids, ",");
        string ps1 = c[0];
        int pi1 = ofToInt(ps1);
        string ps2 = c[1];
        int pi2 = ofToInt(ps2);
        string ps3 = c[2];
        int pi3 = ofToInt(ps3);
        string ps4 = c[3];
        int pi4 = ofToInt(ps4);
        string ps5 = c[4];
        int pi5 = ofToInt(ps5);
//        ofLog() << "Max: " << maxPid << " A:" << ps1 << " B:" << ps2 << " C:" << ps3;
//        ofLog() << floor(ofMap(pi1, 1, maxPid, 1, 10)) << ":" << floor(ofMap(pi2, 1, maxPid, 1, 10)) << ":" << floor(ofMap(pi3, 1, maxPid, 1, 10));
        
        
        ledOn(ofMap(pi1, 1, maxPid, 1, 11),orange1);
        ledOn(ofMap(pi2, 1, maxPid, 1, 11),orange2);
        ledOn(ofMap(pi3, 1, maxPid, 1, 11),orange3);
        ledOn(ofMap(pi4, 1, maxPid, 1, 11),orange4);
        ledOn(ofMap(pi5, 1, maxPid, 1, 11),orange5);
        
        
//        ofSeedRandom(pi1);
//        ledOn(ofRandom(0,10),orange1);
//        ofSeedRandom(pi2);
//        ledOn(ofRandom(0,10),orange2);
//        ofSeedRandom(pi3);
//        ledOn(ofRandom(0,10),orange3);
//        ofSeedRandom(pi4);
//        ledOn(ofRandom(0,10),orange4);
//        ofSeedRandom(pi5);
//        ledOn(ofRandom(0,10),orange5);
        
    }

    fadeLeds();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(col1);
    ofDrawCircle(250, 70, radius);
    ofSetColor(col2);
    ofDrawCircle(355, 105, radius);
    ofSetColor(col3);
    ofDrawCircle(421, 195, radius);
    ofSetColor(col4);
    ofDrawCircle(421, 305, radius);
    ofSetColor(col5);
    ofDrawCircle(355, 395, radius);
    ofSetColor(col6);
    ofDrawCircle(250, 430, radius);
    ofSetColor(col7);
    ofDrawCircle(145, 395, radius);
    ofSetColor(col8);
    ofDrawCircle(79, 305, radius);
    ofSetColor(col9);
    ofDrawCircle(79, 195, radius);
    ofSetColor(col10);
    ofDrawCircle(145, 105, radius);
}

//--------------------------------------------------------------
void ofApp::ledOn(int led,ofColor newcol){
    switch (led) {
        case 1:
            col1.set(newcol);
            break;
        case 2:
            col2.set(newcol);
            break;
        case 3:
            col3.set(newcol);
            break;
        case 4:
            col4.set(newcol);
            break;
        case 5:
            col5.set(newcol);
            break;
        case 6:
            col6.set(newcol);
            break;
        case 7:
            col7.set(newcol);
            break;
        case 8:
            col8.set(newcol);
            break;
        case 9:
            col9.set(newcol);
            break;
        case 10:
            col10.set(newcol);
            break;
            
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::fadeLeds(){
    col1.setSaturation(col1.getSaturation()-5);
    col2.setSaturation(col2.getSaturation()-5);
    col3.setSaturation(col3.getSaturation()-5);
    col4.setSaturation(col4.getSaturation()-5);
    col5.setSaturation(col5.getSaturation()-5);
    col6.setSaturation(col6.getSaturation()-5);
    col7.setSaturation(col7.getSaturation()-5);
    col8.setSaturation(col8.getSaturation()-5);
    col9.setSaturation(col9.getSaturation()-5);
    col10.setSaturation(col10.getSaturation()-5);
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
    fadeLeds();
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
