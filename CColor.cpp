//
// Created by Mamdouh El Nakeeb on 12/5/17.
//

#include "CColor.h"

CColor::CColor() {

    // Initialize values with zeros
    R = G = B = 0;

}

CColor::CColor(int R, int G, int B) {
    this->R = R;
    this->G = G;
    this->B = B;
}

CColor::CColor(int hexInt) {

    // RGB values logically and with these hex values to extract each one value
    R = (hexInt & 0x00FF0000) >> 16;
    G = (hexInt & 0x0000FF00) >> 8;
    B = (hexInt & 0x000000FF);

}

std::string CColor::hexToStr(int hexInt) {

    std::stringstream sstream;

    sstream << std::hex << hexInt;

    return sstream.str();

}

int CColor::rgbToHex(int R, int G, int B) {

    return (R << 16) | (G << 8) | B;

}

std::ostream& operator<<(std::ostream& os, CColor& cColor) {

    os << "(" << cColor.R << ", ";
    os << cColor.G << ", ";
    os << cColor.B << ")";

    return os;

}

std::string CColor::operator()(std::string str) {

    if (str == "hex"){

        return "0x00" + hexToStr(rgbToHex(R, G, B));
    }
}

int CColor::getR() {
    return R;
}

int CColor::getG() {
    return G;
}

int CColor::getB() {
    return B;
}