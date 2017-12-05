//
// Created by Mamdouh El Nakeeb on 12/5/17.
//

#ifndef REPORT_CCOLOR_H
#define REPORT_CCOLOR_H

#include <string>
#include <sstream>
#include <stdlib.h>

class CColor {

private:

    int R, G, B;


    std::string hexToStr(int hexInt);
    int rgbToHex(int R, int G, int B);

public:

    CColor(); // Empty Constructor
    CColor(int R, int G, int B); // init with RGB Values
    CColor(int hexInt); // init with hex value

    std::string operator()(std::string str); // receive ("hex") and return the hex value to print it
    friend std::ostream& operator<< (std::ostream& os, CColor& cColor); // to print the RGB values

    int getR();
    int getG();
    int getB();

};

#endif //REPORT_CCOLOR_H
