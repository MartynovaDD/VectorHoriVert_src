#pragma once
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
void AutoTest();
#include "Header.h"
class CPoint;


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
