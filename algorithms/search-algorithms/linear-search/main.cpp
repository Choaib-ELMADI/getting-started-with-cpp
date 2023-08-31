#include <iostream>

int linearSearch(int *, int);

int main() {
    int nums[6] = {1, 12, 33, 14, 25, 8};
    int target = 81;

    int index = linearSearch(nums, target);
    if (index == -1) {
        std::cout << "Target not found" << std::endl;
    } else {
        std::cout << "Target's index = " << index << std::endl;
    }

    return 0;
}

int linearSearch(int *nums, int target) {
    int i = 0, temp = -1;

    for (i; i<6; ++i) {
        if (target == nums[i]) temp = i;
    }

    return temp;
}