#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    int tru = -1;
    cin >> x >> y;
    // x = sqrt(2);
    // y = sqrt(2);
    cout << "Проверка для прямых и окружности: ";
    if (x <= 2 && x >= 0 && y >= 0 && 
        y <= 2 && (x * x + y * y) >= 4) {
        cout << "Попал!\n";
    } else cout << "Не попал!\n";
    cout << "Проверка параболы и прямой: ";
    if (x >= 0 && y <= 2 - x * x) tru++;
    if (x < 0 && y >= x && y <= 2 - x * x) tru++;
    if (tru != -1) cout << "Попал!\n";
    else cout << "Не попал!\n";
    return 0;
}