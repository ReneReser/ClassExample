// Source file
// Ik heb een calculator class gemaakt heather en source file. Hierin zitten 3 methodes. 
// 1 om tekst te schrijven en twee methodes om twee getallen op te tellen of the vermenigvuldigen.
// Het doel van de test was om object georienteerd te programeren. 
// Zo zou ik de calculator class kunnen gebruiken om meerdere soorten rekenmachines te maken. Basic, wiskunde etc
// die dezelfde basis functies gebruiken.

#include "calculator_class.h"                           // include 
#include <iostream>

int main() {
    Calculator rekenmachine;                            // rekenmachine is een object van class Calculator
    rekenmachine.tekst();                               // aanroep methode tekst() van object rekenmachine
    int som = rekenmachine.optellen(4, 5);              // aanroep methode optellen() van object rekenmachine
    int product = rekenmachine.vermenigvuldigen(3, 7);  // aanroep methode vermenigvuldingen() van object rekenmachine

    std::cout << "Som: " << som << std::endl;   
    std::cout << "Product: " << product << std::endl;

    return 0;
}
