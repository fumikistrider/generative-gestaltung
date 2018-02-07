#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    ofColor background;
    ofColor rect;
    
public:
    //--------------------------------------------------------------
    void setup(){
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofSetLineWidth(0);
    }
    //--------------------------------------------------------------
    void update(){
        background.setHsb( mouseY / 2 , 255, 255);
        rect.setHsb(255 - mouseY / 2, 255, 255);
    }
    //--------------------------------------------------------------
    void draw(){
        ofBackground(background);
        ofSetColor(rect);
        ofDrawRectangle(255, 255, mouseX+1, mouseX+1);
    }

};

 
//========================================================================
int main( ){
	ofSetupOpenGL(510,510,OF_WINDOW);
	ofRunApp(new ofApp());
}
