#include "converter.h"
#include <map>
#include <stdexcept>

// Фіксовані курси: скільки одиниць валюти за 1 USD
static const std::map<std::string, double> rates = {
    {"USD", 1.00},
    {"EUR", 0.92},
    {"UAH", 41.50},
    {"PLN", 3.95},
    {"GBP", 0.79}
};

bool isSupported(const std::string& code) {
    return rates.find(code) != rates.end();
}

double getRate(const std::string& code) {
    auto it = rates.find(code);
    if (it == rates.end())
        throw std::invalid_argument("Невідома валюта: " + code);
    return it->second;
}

double convert(double amount, const std::string& from, const std::string& to) {
    double inUsd = amount / getRate(from);   // спочатку в USD
    return inUsd * getRate(to);              // потім у цільову валюту
}