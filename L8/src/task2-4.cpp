#include <iostream>
#include "../headers/task2-4.h"

using namespace std;

bool find(int* beg, int* end, int target, int* index) {
    for (int i = 0; i < (end - beg); i++) {
        if (beg[i] == target) {
            *index = i;
            return true;
        }
    }
    return false;
}

void reverse(int* beg, int* end) {
    for (int i = 0; i < (end - beg) / 2; i++) {
        int tmp = *(beg + i);
        *(beg + i) = *(end - i - 1);
        *(end - i - 1) = tmp;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}