#include <iostream>
using namespace std;

void heapify(int[], int, int);
void printArray(int[], int);
void heapSort(int[], int);

int main() {
    int arr[] = { 20, 60, 40, 15, 8, 12, 17, 9, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << endl;
    cout << "Before heapifying the array:" << endl;
    printArray(arr, n);

    cout << endl;
    cout << "After heapifying the array:" << endl;
    for (int i=n/2 - 1; i>=0; --i) heapify(arr, n, i);
    printArray(arr, n);

    cout << endl;
    heapSort(arr, n);
    cout << "After heap sorting the array:" << endl;
    printArray(arr, n);
    cout << endl;

    return 0;
}

void heapify(int arr[], int n, int i) {
    int largest = i; //* Initialize largest as root element
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l<n && arr[l] > arr[largest]) largest = l;

    if (r<n && arr[r] > arr[largest]) largest = r;

    if (i != largest) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; ++i) {
        cout << arr[i];

        if (i!=n-1) {
            cout << " - ";
        }
    }
    cout << endl;
}

void heapSort(int arr[], int n) {
    for (int i=n/2 - 1; i>=0; --i) heapify(arr, n, i);

    for (int i=n-1; i>=0; --i) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}