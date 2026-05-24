#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swapping happens, array is already sorted
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted Array:\n";
    printArray(arr, n);

    return 0;
}