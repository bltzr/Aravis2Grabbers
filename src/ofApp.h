#pragma once

#include "ofMain.h"
#include "ofxSyphon.h"
#include "ofxOsc.h"
#include "ofxAravis.h"
#define PORTOUT 12345
#define PORTIN 98765

class ofApp : public ofBaseApp{

    public:

        void setup();
        void update();
        void draw();

        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y);
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void mouseEntered(int x, int y);
        void mouseExited(int x, int y);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
        void getDevices();
        
        ofTrueTypeFont font;
        ofxAravis vidGrabber1, vidGrabber2;
        ofTexture videoTexture1, videoTexture2;
        ofFbo fbo1, fbo2;
        ofShader BCSA;
        int camWidth, camHeight;
        float zoomX1, zoomX2, zoomY1, zoomY2, anchorX1, anchorX2, anchorY1, anchorY2, BR1{1}, BR2{1}, CO1{1}, CO2{1}, SA1{1}, SA2{1};
        bool displayOI{false};
    
        ofxOscSender sender;
        ofxOscReceiver receiver;
    
        ofxSyphonServer SyCam1, SyCam2;

};

