#include <iostream>
#include <algorithm>
#include "arrayTools.h"

void selectionSort(int*, int);

int main() {
    srand(time(NULL));
    const int N = 10;
    int x_coords[N];
    int y_coords[N];
    fillArray(x_coords, N);
    fillArray(y_coords, N);
    printArray(x_coords, N);
    printArray(y_coords, N);
    int totals[N];
    for (int i = 0; i < N; i++) {
        totals[i] = x_coords[i] + y_coords[i];
    }
    selectionSort(totals, N);
    printArray(totals, N);
    return 0;
}

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        int minEl = arr[i], minInd = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < minEl) {
                minEl = arr[j];
                minInd = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = tmp;
    }
}