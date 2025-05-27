# Dit een een rekenmachine gemaakt met classes
## Calculator class
  basis functie optellen en vermenigvuldingen

## Mathematics class
  inherent van Calculator class en een eigen functie omtrek cirkel

## Rekenmachine main

| functie | uitleg |
| ------- | ------ |
| Mathematics rekenmachine;                             | rekenmachine is een object van class Mathematics die inherent van class Calculator |
|  int som = rekenmachine.optellen(4, 5);               | aanroep methode optellen(int, int) van object rekenmachine -> class calculator |
|  int product = rekenmachine.vermenigvuldigen(3, 7);   | aanroep methode vermenigvuldingen(int, int) van object rekenmachine -> class calculator |
|  double cirkel = rekenmachine.OmtrekCirkel(2);        | aanroep methode OmtrekCirkel(int) van object rekenmachine -> class Mathematics |

## Compile en execute
###  g++ rekenmachine.cpp mathematics_class.cpp calculator_class.cpp -o rekenmachine
###  .\rekenmachine


| Resultaat |
| --------- |
| Constructor Calculator aangeroepen |
| Constructor Mathematics aangeroepen |
| Het antwoord is: |
| Som: 9 |
| Product: 21 |
| Omtrek cirkel: 12.5664 |