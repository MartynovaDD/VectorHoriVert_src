#include "Header.h"
#include "Header1.h"
using namespace std;


void CPoint::SetPoint(int x, int y) {
    this->x = x;
    this->y = y;
}
CPoint CPoint::operator+(const CDist& d) {
    CPoint p;
    p.SetPoint(x + d.X_(), y + d.Y_());
    return p;
}
CDist CPoint::operator-(const CPoint& p) {
    CDist d;
    d.SetDist(x - p.X(), y - p.Y());
    return d;
}
void CPoint::GetPoint()const {
    cout << x;
    cout << y << endl;
};

