#include <iostream>
#include <cmath>
#include "../headers/squares.h"

using namespace std;

double calcSquare(double r) {
    return M_PI * r * r;
}

double calcSquare(double a, double b) {
    return a * b;
}

double calcSquare(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * sqrt(p - a) * sqrt(p - b) * sqrt(p - c));
}