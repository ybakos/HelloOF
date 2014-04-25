#pragma once
#include "ofMain.h"

namespace yjb {

    class Bubble {
    
    public:
        static const int MAXIMUM_RADIUS = 100;
        Bubble();
        Bubble(ofPoint location, ofColor color, int radius);
        void move();
        void draw();
    private:
        ofPoint location;
        int radius;
        ofColor color;
    };
    
}
