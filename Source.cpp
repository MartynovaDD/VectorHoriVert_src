#include "Header.h"
#include "Header1.h"

int main() {
    std::ifstream inp("data.txt");
    if (!inp.is_open()) {
        std::cout << "Error! Cannot open\n";
        return 1;
    }
    int A;
    int B;
    inp >> A;
    inp >> B;
    CPoint p;
    p.SetPoint(A, B);
    inp >> A;
    inp >> B;
    CDist d;
    d.SetDist(A, B);
    CPoint point1 = p + d;
    point1.GetPoint();

    inp >> A;
    inp >> B;
    CPoint p0;
    p0.SetPoint(A, B);
    inp >> A;
    inp >> B;
    CDist d0;
    d0.SetDist(A, B);
    CPoint point2 = d0 + p0; 
    point2.GetPoint();

    inp >> A;
    inp >> B;
    CPoint p1;
    p1.SetPoint(A, B);
    inp >> A;
    inp >> B;
    CPoint p2;
    p2.SetPoint(A, B);
    CDist dist = p1 - p2;
    dist.GetDist();

    AutoTest();
    inp.close();

    return 0;
}