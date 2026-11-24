
#include <bits/stdc++.h>
using namespace std;

// Structure of a Doubly Linked List Node
struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int val) {
        data = val;
        next = nullptr;
        back = nullptr;
    }
};

// Convert Array into Doubly Linked List
Node* convertArr2DLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);

        temp->back = prev;
        prev->next = temp;

        prev = temp;
    }

    return head;
}

// Function to delete the head node
Node* deleteHead(Node* head) {

    // If DLL is empty
    if (head == nullptr) {
        return nullptr;
    }

    // Store the current head
    Node* prev = head;

    // Move head to the next node
    head = head->next;

    // If another node exists, update its back pointer
    if (head != nullptr) {
        head->back = nullptr;
    }

    // Disconnect the previous head
    prev->next = nullptr;

    // Delete the old head node
    delete prev;

    // Return the updated head
    return head;
}

// Function to print Doubly Linked List
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {

    vector<int> arr = {12, 5, 8, 7};

    // Convert array into DLL
    Node* head = convertArr2DLL(arr);

    cout << "Original DLL: ";
    print(head);

    // Delete head node
    head = deleteHead(head);

    cout << "After deleting head: ";
    print(head);

    return 0;
}
