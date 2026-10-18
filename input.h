#pragma once
#include <string>

// Зчитує код валюти (приводить до верхнього регістру)
std::string readCurrency(const std::string& prompt);

// Зчитує суму (повторює запит, доки введено число)
double readAmount();