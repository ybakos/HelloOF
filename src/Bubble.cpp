#include "Bubble.h"
#include "Direction.h"

using namespace yjb;

Bubble::Bubble() {
    location = ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 100);
    radius = ofRandom(MAXIMUM_RADIUS);
    velocity = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));
    if (velocity.length() < MINIMUM_VELOCITY) velocity.set(MINIMUM_VELOCITY);
}

Bubble::Bubble(ofPoint location, ofColor color, int radius) {
    this->location = location;
    this->color = color;
    this->radius = radius;
    velocity = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));
    if (velocity.length() < MINIMUM_VELOCITY) velocity.set(MINIMUM_VELOCITY);
}

void Bubble::move() {
    location += velocity;
}

void Bubble::bounceX() {
    velocity.x *= -1;
}

void Bubble::bounceY() {
    velocity.y *= -1;
}

void Bubble::draw() {
    ofSetCircleResolution(100);
    ofSetColor(color);
    ofCircle(location, radius);
}

void Bubble::considerBouncing(int boundX, int boundY) {
    if (location.x >= boundX || location.x <= 0) bounceX();
    if (location.y >= boundY || location.y <= 0) bounceY();
}
