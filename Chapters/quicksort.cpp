#include <iostream>
using namespace std;

// Correct partition function (Lomuto partition scheme)
int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int pos = start;
    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[end]);
    return pos;
}

// Quicksort function
void quicksort(int arr[], int start, int end) {
    if (start >= end) return;
    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);  // left side
    quicksort(arr, pivot + 1, end);    // right side
}

int main() {
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
