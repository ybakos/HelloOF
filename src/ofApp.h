#pragma once
#include "ofMain.h"
#include "Bubble.h"

class ofApp : public ofBaseApp {

  public:
    static const int NUMBER_OF_BUBBLES = 50000;
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
  private:
    std::vector<yjb::Bubble> bubbles;
    void generateBubbles();
    
};
