#pragma once

#include "ofMain.h"
#include "ofxKinect.h"
#include "ofxSpacebrew.h"

class ofApp : public ofBaseApp {
public:
    
    void setup();
    void update();
    void draw();
    void exit();
    
    void drawPointCloud();
    
    void keyPressed(int key);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    
    ofxKinect kinect;
    ofTrueTypeFont	verdana;
    
    int angle;
    double avgSum;
    
    //spacebrew magic
    Spacebrew::Connection spacebrew;
    
};
