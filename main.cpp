#include <iostream>
 #include "input.h"
  #include "converter.h" 
  #include "output.h"
int main() {
     char again = 'y'; 
     std::cout << "Конвертер валют (USD, EUR, UAH, PLN, GBP)" << std::endl;
while (again == 'y' || again == 'Y') {
    std::string from = readCurrency("З валюти: ");
    std::string to   = readCurrency("У валюту: ");
    double amount    = readAmount();

    if (!isSupported(from) || !isSupported(to)) {
        printError("непідтримувана валюта");
    } else if (amount < 0) {
        printError("сума не може бути від'ємною");
    } else {
        double result = convert(amount, from, to);
        printResult(amount, from, result, to);
    }

    std::cout << "Продовжити? (y/n): ";
    std::cin >> again;
}
return 0;
}