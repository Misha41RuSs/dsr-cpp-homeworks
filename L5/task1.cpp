#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int N, a = -20, b = 20;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % (b - a + 1) + a;
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int minInd = 0, maxInd = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[maxInd]) {
            maxInd = i;
        }
        if (arr[i] < arr[minInd]) {
            minInd = i;
        }
    }
    int total = 0;
    if (maxInd > minInd) {
        for (int i = maxInd; i >= minInd; i--) {
            total += arr[i];
        }
    }
    else {
        for (int i = minInd; i >= maxInd; i--) {
            total += arr[i];
        }
    }
    cout << total;
    delete[] arr;
    return 0;
}