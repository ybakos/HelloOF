#pragma once
#include "ofMain.h"

namespace yjb {

    class Bubble {
    
    public:
        static const int MAXIMUM_RADIUS = 20;
        float MINIMUM_VELOCITY = 0.2;
        Bubble();
        Bubble(ofPoint location, ofColor color, int radius);
        void move();
        void draw();
        void bounceX();
        void bounceY();
        void considerBouncing(int boundX, int boundY);
    private:
        ofPoint location;
        ofVec2f velocity;
        int radius;
        ofColor color;
    };
    
}
