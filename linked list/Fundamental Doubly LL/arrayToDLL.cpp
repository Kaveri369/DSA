
#include <bits/stdc++.h>
using namespace std;

// Node structure for Doubly Linked List
class Node {
public:
    int data;
    Node* next;
    Node* back;

    // Constructor 1
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    // Constructor 2
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Convert Array into Doubly Linked List
Node* convertArr2DLL(vector<int>& arr) {

    // Create the first node
    Node* head = new Node(arr[0]);

    // Previous pointer initially points to head
    Node* prev = head;

    // Traverse the array from index 1
    for (int i = 1; i < arr.size(); i++) {

        // Create a new node
        Node* temp = new Node(arr[i], nullptr, prev);

        // Connect previous node to the new node
        prev->next = temp;

        // Move prev to the newly created node
        prev = temp;
    }

    return head;
}

// Print Doubly Linked List
void print(Node* head) {

    while (head != NULL) {

        cout << head->data << " ";

        head = head->next;
    }

    cout << endl;
}

// Main function
int main() {

    vector<int> arr = {12, 5, 8, 7};

    // Convert array into Doubly Linked List
    Node* head = convertArr2DLL(arr);

    // Print the Doubly Linked List
    print(head);

    return 0;
}
