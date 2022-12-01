// Optimized implementation of Selection sort
#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);

// Selection Sort: Non-stable Non-Adapative = Always O(n^2)

// Iterative Selection Sort
void selectionSort(int a[], int low, int high) {
    for (int i = low; i <= high - 1; i++) {
        int min = i;
        for (int j = i + 1; j <= high; j++) { 
            if (a[j] < a[min]) min = j; // For descending order change > to <
        }
        swap(a[i], a[min]);
    }
}

// Recursive Selection Sort
// Assumption: 0 <= a <= b < size of arr
int fnA(int arr[], int a, int b) {
    if (a == b) {
        return a;
    }
    int i = fnA(arr, a + 1, b);
    return (arr[a] < arr[i]) ? a : i;
}

// Assumption: 0 <= a <= b < size of arr
void fnB(int arr[], int a, int b) {
    if (a >= b) {
        return;
    }
    int i = fnA(arr, a, b);
    swap(arr[a], arr[i]);
    fnB(arr, a + 1, b);
}

void fn(int arr[], int size) {
    fnB(arr, 0, size - 1);
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}