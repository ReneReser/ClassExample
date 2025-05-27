#ifndef MATHEMATICS_CLASS_H_
#define MATHEMATICS_CLASS_H_

#include "calculator_class.h"

#include <iostream>
#include <string>

class Mathematics : public Calculator {
public:
    Mathematics();                     // Constructor
    double OmtrekCirkel(int r);       // Methode om omtrek van cirkel te berekenen
};

#endif // MATHEMATICS_CLASS_H_
