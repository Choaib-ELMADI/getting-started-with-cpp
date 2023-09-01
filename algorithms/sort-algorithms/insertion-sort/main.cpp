#include <iostream>
using namespace std;

void insertionSort(int *, int);

int main() {
    int nums[] = {1, 7, 2, 5, 6, 8, 3, 4};
    int length = sizeof(nums) / sizeof(int);

    for (auto n: nums) cout << n << " - ";
    cout << endl;

    insertionSort(nums, length);

    for (auto n: nums) cout << n << " - ";
    cout << endl;

    return 0;
}

void insertionSort(int *nums, int length) {
    for (int i=1; i<length; ++i) {
        int current = nums[i];

        int j = i-1;
        while (j>=0 && nums[j]>current) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = current;
    }
}