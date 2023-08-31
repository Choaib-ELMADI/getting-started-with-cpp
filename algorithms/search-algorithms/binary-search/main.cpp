#include <iostream>

int binarySearch(int *, int);

int main() {
    int nums[6] = {1, 12, 33, 14, 25, 8};
    int target = 1;

    int index = binarySearch(nums, target);
    if (index == -1) {
        std::cout << "Target not found" << std::endl;
    } else {
        std::cout << "Target's index = " << index << std::endl;
    }

    return 0;
}

int binarySearch(int *nums, int target) {
    int start = 0;
    int end = 5;
    int mid = (start+end) / 2;

    int i=0;
    while (nums[mid] != target) {
        if (target > nums[mid]) {
            start = mid;
        } else {
            end = mid;
        }
        mid = (start+end) / 2;
        ++i;

        if (i>6) return -1;
    }

    return mid;
}