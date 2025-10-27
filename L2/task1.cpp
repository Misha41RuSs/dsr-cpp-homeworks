#include <iostream>
#include <cmath>

using namespace std;

double f(double);

int main() {
    double x;
    cin >> x;
    cout << f(x);
    return 0;   
}

double f(double x) {
    if (x == 0) return 1;
    return sin(x) / x;
}