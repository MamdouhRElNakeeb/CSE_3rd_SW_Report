#include <iostream>
#include "CColor.h"

using namespace std;

CColor average (CColor a, CColor b, CColor c){

    int R = (a.getR() + b.getR() + c.getR()) / 3;
    int G = (a.getG() + b.getG() + c.getG()) / 3;
    int B = (a.getB() + b.getB() + c.getB()) / 3;

    return CColor(R, G, B);
}

int main() {

    CColor a(255, 128, 192);
    CColor b(0x00667755);
    CColor c(0x00552211);


    cout << "a color = " << a << endl;
    cout << "b color = " << b("hex") << endl;

    CColor y = average(a, b, c);
    cout << "y color = " << y << endl;


    return 0;
}