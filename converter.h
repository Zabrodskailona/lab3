#pragma once
#include <string>

// Перевірка, чи підтримується код валюти
bool isSupported(const std::string& code);

// Курс валюти відносно базової (USD)
double getRate(const std::string& code);

// Конвертація суми з валюти from у валюту to
double convert(double amount, const std::string& from, const std::string& to);