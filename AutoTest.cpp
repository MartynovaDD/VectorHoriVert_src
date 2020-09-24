#include "Header.h"
#include "Header1.h"

using namespace std;

void AutoTest() {
	CPoint p;
	p.SetPoint(1, 2);
	CDist d;
	d.SetDist(1, 1);
	CPoint P = p + d;
	if (P.X() == 2 && P.Y() == 3) {
		cout << "AutoTest passed..." << endl;
	}
	else {
		cout << "AutoTest falled..." << endl;
	}
}