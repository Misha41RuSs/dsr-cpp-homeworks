#include <iostream>
#include <algorithm>
#include "arrayTools.h"

using namespace std;

int binarySearch(int*, int, int);
void bubbleSort(int*, int);

int main() {
    srand(time(NULL));
    const int N = 10;
    int arr[10];
    fillArray(arr, N);
    printArray(arr, N);
    bubbleSort(arr, N);
    printArray(arr, N);
    cout << binarySearch(arr, N, -20) << " " << binarySearch(arr, N, 20);
    return 0;
}

void bubbleSort(int* arr, int size) {
    bool isSorted = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSorted = false;
            } 
        }
        if (isSorted) break;
        else isSorted = true;
    }
}

int binarySearch(int* arr, int size, int el) {
    int left = 0;
    int right = size - 1;
    int mid = left + (right - left) / 2;
    while (left <= right) {
        if (arr[mid] > el) {
            right = mid - 1;
        } else if (arr[mid] < el) {
            left = mid + 1;
        } else return mid;
        mid = left + (right - left) / 2;
    }
    return -1;
}