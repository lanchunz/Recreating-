#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
			font.load("typo-hoop.demo-bold.otf", 100,true,true,true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 39, 137);
	ofEnableAlphaBlending();
	
	vector< ofPath >pathsa = font.getStringAsPoints("sunday");
	ofTranslate(300,300);
	for (int i = 0; i < pathsa.size(); i++) {
		ofSetColor(255, 225, 0);
		pathsa[i].draw();
	}

	vector< ofPath >pathsb = font.getStringAsPoints("sunday");
	ofTranslate(50, 0);
	for (int i = 0; i < pathsb.size(); i++) {

		for (int k = 0; k < pathsa.size(); k++) {
			if (pathsb[i].getOutline()[0].getVertices() == pathsb[k].getOutline()[0].getVertices()) {  //somthing wrong here i guess

				ofSetColor(125, 217, 161);
				pathsb[i].draw();

			}
			else {
				ofSetColor(135, 96, 227, 127);
				pathsb[i].draw();
			}
		}
	}	
	
	//---------------------------  transparency
	ofSetColor(255, 225, 0);
	font.drawString("hello", 300, 300);//yellow font
	ofDrawRectangle(400, 350, 100, 100);
		
	//ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
	//ofEnableBlendMode(OF_BLENDMODE_ADD);
	//ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
	ofEnableBlendMode(OF_BLENDMODE_SCREEN);
	ofSetColor(135, 96, 227, 127);   // purple, 50% transparent
	font.drawString("hello", 400, 300);//purple font
	ofDrawRectangle(450, 430, 100, 33);


	//	ofSetColor(255,225,0,(int)(counter * 10.0f) % 255);  
	//	ofDrawRectangle(450,370,100,33);
	ofDisableAlphaBlending();




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
