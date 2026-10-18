#pragma once
#include <string>

// Виведення результату конвертації
void printResult(double amount, const std::string& from,
                 double result, const std::string& to);

// Виведення повідомлення про помилку
void printError(const std::string& message);