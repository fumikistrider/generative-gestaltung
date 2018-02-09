#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    int     stepX, stepY;
    ofFloatColor fcolor;
    
public:
    //--------------------------------------------------------------
    void setup(){
        ofBackground(0);
        ofSetLineWidth(0);
        ofSetRectMode(OF_RECTMODE_CORNER);
    }
    //--------------------------------------------------------------
    void update(){
    }
    //--------------------------------------------------------------
    void draw(){
        stepX = ofGetMouseX()+2;
        stepY = ofGetMouseY()+2;
        if(stepX < 2) stepX = 2;
        if(stepY < 2) stepY = 2;
//        cout << stepX << " - " << stepY << endl;
        for(int gridY = 0; gridY < ofGetHeight(); gridY += stepY) {
            for(int gridX = 0; gridX < ofGetWidth(); gridX += stepX){
                float h = gridX / 800.0;
                float s = (400.0 - gridY) / 400.0;
                fcolor.setHsb(h, s , 1.0);
                ofSetColor(fcolor);
                ofDrawRectangle(gridX, gridY, stepX, stepY);
            }
        }
    }

};

 
//========================================================================
int main( ){
	ofSetupOpenGL(800,400,OF_WINDOW);
	ofRunApp(new ofApp());
}
