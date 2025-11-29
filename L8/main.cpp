#include <iostream>
#include "headers/squares.h"
#include "headers/task2-4.h"

using namespace std;

int main() {
    double r, a, b, a1, b1, c1;
    int arr[] = { 2, 5, 1, 3, 7, 1, -1, -20, 5 };
    const int N = 9;
    int index = -1;
    cin >> r >> a >> b >> a1 >> b1 >> c1;
    cout << calcSquare(r) << "\n";
    cout << calcSquare(a, b) << "\n";
    cout << calcSquare(a1, b1, c1) << "\n";
    if (find(arr, arr + N, -20, &index)) {
        cout << "Есть " << index << "\n";
    } else {
        cout << "Нету" << "\n";
    }
    cout << "До реверса: ";
    printArray(arr, N);
    cout << "\n";
    cout << "После реверса: ";
    reverse(arr, arr + N);
    printArray(arr, N);
    cout << "\n";
    return 0;
}