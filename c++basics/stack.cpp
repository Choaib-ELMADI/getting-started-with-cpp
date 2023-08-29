/*
    !Stacks use the LIFO technique ==> Last In First Out
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> nums;
    // nums.push(10);

    cout << nums.empty() << endl; //! Checks if the stack is empty
    cout << nums.size() << endl; //! Returns the size of the stack
    nums.empty() ? (cout << "Empty stack" << endl) : (cout << nums.top() << endl);//! Returns  the top element (last added)

    nums.push(5); //! Add element to the stack (add at the end)
    cout << "Size after pushing: " << nums.size() << endl;

    nums.pop(); //! Remove element from the stack (remove from the end)
    cout << "Size after poping: " << nums.size() << endl;

    return 0;
}