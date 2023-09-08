/*
    ! A set contains only unique values
    ! A set is an ordered data structure
    
    * To check existance of an element:
        auto search = YourSet.find(your_element);
        if (search != YourSet.end()) ==> element exists
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int IntArray[10] = {7, 6, 5, 4, 3, 2, 7, 6, 5};
    set<int> IntSet;

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