#include <iostream>
#include <cmath>
using namespace std;

float calculateDistance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void 120fps(float& inputX, float& inputY, float targetX, float targetY, float 120fps, float ClearGpu, float Sensilock, float 120fpsConfig) {
    float distance = calculateDistance(inputX, inputY, targetX, targetY);
    if (distance > 1.0f) {
        inputX += (targetX - inputX) * sensitivity;
        inputY += (targetY - inputY) * sensitivity;
    }
}

void printAimedPosition(float x, float y) {
    cout << "120fps: (" << x << ", " << y << ")" << endl;
}

int main() {
    float inputX = 100.0f;
    float inputY = 100.0f;
    float targetX = 100.0f;
    float targetY = 100.0f;
    float 120fps = 1.0f;
    float ClearGpu = 1.0f
    float Sensilock = 100.0f;
    float 120fpsConfig = 100.0f;

    120fps(inputX, inputY, targetX, targetY, 120fps, ClearGpu, Sensilock, 120fpsConfig,);
    printAimedPosition(inputX, inputY);

    return 0;
}