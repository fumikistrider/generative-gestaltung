#include "ofMain.h"

//#include "ofApp.h"


class ofApp : public ofBaseApp{
    
public:
    //--------------------------------------------------------------
    void setup(){
        ofBackground(0);
    }
    //--------------------------------------------------------------
    void update(){
    }
    //--------------------------------------------------------------
    void draw(){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/4 * sin( ofDegToRad( ofGetFrameNum())));
    }

};

 
//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
