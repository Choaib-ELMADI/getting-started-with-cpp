#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node *next;
};

void printList(Node *);
void insertEnd(Node *, int);
Node *insertStart(Node *, int);

int main() {
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 1;
    second->value = 2;
    third->value = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    printList(head);

    insertEnd(head, 4);
    head = insertStart(head, 0);
    insertEnd(head, 5);
    head = insertStart(head, -1);

    printList(head);

    return 0;
}

void printList(Node *e) {
    while (e != NULL) {
        cout << e->value;
        if (e->next != NULL) cout << " - ";
        e = e->next;
    }
    cout << endl;
}

void insertEnd(Node *e, int v) {
    Node *newElt = new Node();
    newElt->value = v;
    
    Node *curr = e;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = newElt;
    newElt->next = NULL;
}

Node *insertStart(Node *e, int v) {
    Node *newElt = new Node();
    newElt->value = v;
    newElt->next = e;

    return newElt;
}