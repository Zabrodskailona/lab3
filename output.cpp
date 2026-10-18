#include "output.h"
#include <iostream>
#include <iomanip>

void printResult(double amount, const std::string& from,
                 double result, const std::string& to) {
    std::cout << std::fixed << std::setprecision(2)
              << amount << " " << from << " = "
              << result << " " << to << std::endl;
}

void printError(const std::string& message) {
    std::cout << "Помилка: " << message << std::endl;
}