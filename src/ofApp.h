#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void ledOn(int led,ofColor newcol);
        void fadeLeds();
		
    float startTime;
    float endTime;
    bool  timerReached;
    
    ofColor orange1,orange2,orange3,orange4,orange5;
    
    ofColor col1, col2, col3, col4, col5, col6, col7, col8, col9, col10;
    float radius;
    
    int maxPid;
    string topPids;
    int pids;
};
