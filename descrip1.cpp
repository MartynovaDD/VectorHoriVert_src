#include "Header.h"
#include "Header1.h"
using namespace std;

void CDist::SetDist(int x_, int y_) {
    this->x_ = x_;
    this->y_ = y_;
}
CPoint CDist::operator+(const CPoint& d) {
    CPoint p;
    p.SetPoint(d.X() + x_, d.Y() + y_);
    return p;
}
void CDist::GetDist()const {
    cout << x_;
    cout << y_ << endl;
};