
#include <bits/stdc++.h>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Convert Array into Linked List
Node* convertArr2LL(vector<int>& arr) {

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {

        Node* temp = new Node(arr[i]);

        mover->next = temp;
        mover = temp;
    }

    return head;
}

// Insert a new node at the tail
Node* insertTail(Node* head, int val) {

    // If Linked List is empty
    if (head == NULL) {
        return new Node(val);
    }

    // Start traversing from head
    Node* temp = head;

    // Move to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Create a new node
    Node* newNode = new Node(val);

    // Connect last node to new node
    temp->next = newNode;

    return head;
}

// Print Linked List
void print(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Main function
int main() {

    vector<int> arr = {12, 5, 8, 7};

    // Convert array into Linked List
    Node* head = convertArr2LL(arr);

    cout << "Original Linked List: ";
    print(head);

    // Insert 100 at the tail
    head = insertTail(head, 100);

    cout << "After Inserting at Tail: ";
    print(head);

    return 0;
}
