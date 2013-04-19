#pragma once

#include "ofMain.h"
#include "ofxBlur.h"
#include "ofxThinkGear.h"

class testApp : public ofBaseApp{

  public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofVideoPlayer welcomescreen;
        ofVideoPlayer gameplay;
        ofVideoPlayer gameover;
    
        vector<ofFbo*> fbos;
    
        ofxBlur blur;
    
        float lastTime;
        float duration;
    
        ofImage alert;
    
private:
    
    ofxThinkGear thinkGear;
    void attentionListener(float &param);
    
    
    float attention;
    
    float currBlur;
    
    bool welcome;
    bool incident;
    bool over;
    bool danger;
    bool extreme;
    bool firstPlaySeq;
    bool lastPlaySeq;
    
    int counter;
    int threshold;
    int openThreshold;
    

    
};
