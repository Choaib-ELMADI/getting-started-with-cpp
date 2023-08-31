#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;    //! Declare an int vector
    v = {1, 2, 3, 4}; //! Initialize the vector
    for (int i: v) {
        cout << i << " ";
    }
    cout << endl;

    v = {1, 2};//! Vectors can change their size
    for (int i: v) {
        cout << i << " ";
    }

    v.front();      //! First element
    v.back();       //! Last element
    v.size();       //! Number of elements it holds
    v.capacity();   //! Number of elements it can hold
    //! shrink_to_fit() ==> make size == capacity

    v.push_back(5); //! Add element at the end
    v.pop_back();   //! Remove last element
    v.insert(v.begin(), 5); //! Insert the item at the specified position (pointer)
    v.erase(v.begin());     //! Remove the item at the specified position (pointer)

    return 0;
}