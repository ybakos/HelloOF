#include "Bubble.h"
#include "Direction.h"

using namespace yjb;

Bubble::Bubble() {
    location = ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 100);
    radius = ofRandom(MAXIMUM_RADIUS);
}

Bubble::Bubble(ofPoint location, ofColor color, int radius) {
    this->location = location;
    this->color = color;
    this->radius = radius;
}

void Bubble::move() {
    int direction = (int)ofRandom(4);
    if (direction == UP) {
        location.y--;
    } else if (direction == DOWN) {
        location.y++;
    } else if (direction == RIGHT) {
        location.x++;
    } else if (direction == LEFT) {
        location.x--;
    }
}

void Bubble::draw() {
    ofSetCircleResolution(100);
    ofSetColor(color);
    ofCircle(location, radius);
}