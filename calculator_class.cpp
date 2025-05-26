// Source file

// include voor eigen header file ( #include “…” )
#include "calculator_class.h"

// standaard namespace van de STL. Wanneer je die niet gebruikt std:: voor STL’s zetten
using namespace std;

// Constructor implementatie
Calculator::Calculator() {
    cout << "Contructor aangeroepen " << endl;
}

// Implementatie van de methode tekst() van class Calculator
void Calculator::tekst() {
    cout << "Het antwoord is: " << endl;
}
// Implementatie van de methode optellen() van class Calculator
int Calculator::optellen(int a, int b) {
    int getal = a + b;
    return getal;
}
// Implementatie van de methode vermenigvuldigen van classCalculator
int Calculator::vermenigvuldigen(int a, int b) {
    int getal = a * b;
    return getal;
}
