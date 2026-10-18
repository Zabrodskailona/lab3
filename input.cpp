#include "input.h"
#include <iostream>
#include <limits>
#include <cctype>

std::string readCurrency(const std::string& prompt) {
    std::string code;
    std::cout << prompt;
    std::cin >> code;
    for (char& c : code)
        c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    return code;
}

double readAmount() {
    double amount;
    std::cout << "Введіть суму: ";
    while (!(std::cin >> amount)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Помилка. Введіть число: ";
    }
    return amount;
}