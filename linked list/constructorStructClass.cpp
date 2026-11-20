#include <bits/stdc++.h>
using namespace std;

// Structure of a Linked List Node
// we can also use class instead of struct
// class Node {
struct Node {
public:
    int data;       // Stores the value of the node
    Node* next;     // Pointer to the next node

public:
    // Constructor 1: Creates a node with data and next pointer
    Node(int data1, Node* next1) {
        data = data1;       // Assign data to the node
        next = next1;       // Assign address of next node
    }

public:
    // Constructor 2: Creates a node with only data
    Node(int data1) {
        data = data1;       // Assign data to the node
        next = nullptr;    // No next node initially
    }
};

int main() {

    // Creating an array
    vector<int> arr = {2, 5, 8, 7};

    // Creating a new node with the first array element
    Node* y = new Node(arr[0]);

    // Printing the data stored in the node
    cout << y->data;

    return 0;
}