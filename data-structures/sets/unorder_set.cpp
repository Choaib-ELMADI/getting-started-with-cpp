/*
    ! unordered_set contains only unique values
    ! unordered_set is not necessary an ordered data structure

    * To check existance of an element:
        auto search = YourUSet.find(your_element);
        if (search != YourUSet.end()) ==> element exists
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int IntArray[10] = {7, 6, 5, 4, 3, 2, 7, 6, 5, 10};
    unordered_set<int> IntSet;

    for (int n: IntArray) {
        cout << n << " _ ";
        IntSet.insert(n);//! Insertion only happen if IntSet doesn't already contain value of n
    }
    cout << endl;

    for (int n: IntSet) {
        cout << n << " _ ";
    }
    cout << endl;

    return 0;
}