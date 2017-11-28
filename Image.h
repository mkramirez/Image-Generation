#pragma once

#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
typedef unsigned char byte;

class Image {
public:
    Image() : w(0), h(0), x0(0), y0(0), dx(0), dy(0),  pixels(nullptr){ }
    ~Image() { delete [] pixels; }
    void load(const char * filename, int w, int h);
    void draw() const;
    void setSpeed(double dx, double dy);
    void update(double dt);
    void getX(double x) { x0 = x; }
    void getY(double y) { y0 = y; }

private:
    byte * pixels;
    int w;
    int h;
    double x0, y0;
    double dx, dy;
};