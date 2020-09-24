#pragma once
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include "Header1.h"
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

