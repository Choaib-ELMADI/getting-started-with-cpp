/*
    !Queues use the FIFO technique ==> First In First Out
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> nums;

    cout << nums.empty() << endl; //! Checks if the queue is empty
    cout << nums.size() << endl; //! Returns the size of the queue
    nums.empty() ? (cout << "Empty queue" << endl) : (cout << nums.front() << endl);//! Returns the front element (first added)
    cout << endl;

    nums.push(5); //! Add element to the queue (add at the back)
    nums.push(7);
    nums.push(9);
    cout << "Size after pushing: " << nums.size() << endl;
    cout << "Back of the queue : " << nums.back() << endl; //! Returns last added element
    cout << "Front of the queue: " << nums.front() << endl;//! Returns first added element
    cout << endl;

    nums.pop(); //! Remove element from the queue (remove from the front)
    cout << "Size after popping: " << nums.size() << endl;
    cout << "Back of the queue : " << nums.back() << endl;
    cout << "Front of the queue: " << nums.front() << endl;

    return 0;
}