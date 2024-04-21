//
// Created by Norik Saroyan on 26.03.24.
//

#ifndef OP_PROJ_CONSOLE_TRANSMISSION_H
#define OP_PROJ_CONSOLE_TRANSMISSION_H

#include "string"
using namespace std;

enum Transmission {
    MANUAL,
    AUTOMATIC,
    VARIATOR
};

inline const char * toString(Transmission trsmn) {
    switch (trsmn) {
        case MANUAL:
            return "MANUAL";
        case AUTOMATIC:
            return "AUTOMATIC";
        case VARIATOR:
            return "VARIATOR";
        default:
            return "[NAN]";
    }
}

// string to transmission
static Transmission stot(const string& str) {
    if (str == "MANUAL") {
        return MANUAL;
    } else if (str == "AUTOMATIC") {
        return AUTOMATIC;
    } else if (str == "VARIATOR") {
        return VARIATOR;
    }
}


#endif //OP_PROJ_CONSOLE_TRANSMISSION_H
