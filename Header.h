#pragma once
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
void AutoTest();
class CDist;

class CPoint {
    int x, y;
public:
    int X()const {
        return x;
    }
    int Y()const {
        return y;
    }
    CPoint() {
        x = 0;
        y = 0;
    }
    void SetPoint(int x, int y);
    CPoint operator+ (const CDist& d);
    CDist operator- (const CPoint& p);
    void GetPoint()const;
};

class CDist {
    int x_, y_;
public:
    int X_()const {
        return x_;
    }
    int Y_()const {
        return y_;
    }
    CDist() {
        x_ = 0;
        y_ = 0;
    }
    void SetDist(int x_, int y_);
    CPoint operator+ (const CPoint& p);
    void GetDist()const;
};