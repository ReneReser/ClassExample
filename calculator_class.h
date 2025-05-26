// calculator_class.h

// Include guard, ter voorkoming van dubbele inclusie bij vaker gebruik #include
#ifndef CALCULATOR_CLASS_H_
#define CALCULATOR_CLASS_H_

// include voor STL, C++ Standard Template Library ( #include <…> )
#include <iostream>		// gebruik class-type iostream voor cout en cin
#include <string>		// bebruik class-type string

// Definitie van de Calculator class
class Calculator {
public:
    Calculator();			                // constructor declaratie
    void tekst();                           // Methode om tekst weer te geven
    int optellen(int a, int b);             // Methode om twee getallen op te tellen
    int vermenigvuldigen(int a, int b);     // Methode om twee getallen te vermenigvuldigen
};

#endif
