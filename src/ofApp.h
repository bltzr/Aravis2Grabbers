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
        int camWidth, camHeight, camWidth2, camHeight2;
        float zoomX1{1}, zoomX2{1}, zoomY1{1}, zoomY2{1}, anchorX1{0.5}, anchorX2{0.5}, anchorY1{0.5}, anchorY2{0.5}, BR1{1}, BR2{1}, CO1{1}, CO2{1}, SA1{1}, SA2{1}, FanchorX1{0.5}, FanchorX2{0.5}, FanchorY1{0.5}, FanchorY2{0.5}, Fradius1{0.6}, Fradius2{0.45};
        bool displayOI{false};
    
        ofxOscSender sender;
        ofxOscReceiver receiver;
    
        ofxSyphonServer SyCam1, SyCam2;

};

