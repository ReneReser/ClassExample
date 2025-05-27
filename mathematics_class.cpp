#define _USE_MATH_DEFINES
#include "mathematics_class.h"
#include "calculator_class.h"

#include <cmath> // voor M_PI
#include <iostream>

using namespace std;

Mathematics::Mathematics() {
    cout << "Constructor aangeroepen" << endl;
}

double Mathematics::OmtrekCirkel(int r) {
    return 2 * M_PI * r;
}
