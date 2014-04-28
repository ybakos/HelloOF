#include "ofApp.h"

void ofApp::setup() {
    ofBackground(0);
    generateBubbles();
}

void ofApp::update() {
    for (yjb::Bubble& b : bubbles) {
        b.move();
    }
}

void ofApp::draw() {
    for (yjb::Bubble& b : bubbles) {
        b.draw();
        b.considerBouncing(ofGetWindowWidth(), ofGetWindowHeight());
    }
}

void ofApp::generateBubbles() {
    for (int i = 0; i < NUMBER_OF_BUBBLES; ++i) {
        bubbles.push_back(yjb::Bubble());
    }
}

void ofApp::keyPressed(int key) {
    bubbles.push_back(yjb::Bubble());
}

void ofApp::keyReleased(int key) {

}

void ofApp::mouseMoved(int x, int y) {

}

void ofApp::mouseDragged(int x, int y, int button) {

}

void ofApp::mousePressed(int x, int y, int button) {

}

void ofApp::mouseReleased(int x, int y, int button) {

}

void ofApp::windowResized(int w, int h) {

}

void ofApp::gotMessage(ofMessage msg) {

}

void ofApp::dragEvent(ofDragInfo dragInfo) {

}
