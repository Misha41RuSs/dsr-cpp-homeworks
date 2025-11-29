#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    // x = sqrt(2);
    // y = sqrt(2);
    cout << "Проверка для прямых и окружности: ";
    if (x * x + y * y >= 4 && y <= 4 && x <= 4 &&
        x >= 0 && y >= 0) {
        cout << "Попал!\n";
    } else cout << "Не попал!\n";
    cout << "Проверка параболы и прямой: ";
    if (y >= x && y <= 2 - x * x || y < x && y > 0 && y <= 2 - x * x) {
        cout << "Попал!\n";
    } else cout << "Не попал!\n";
    return 0;
}

