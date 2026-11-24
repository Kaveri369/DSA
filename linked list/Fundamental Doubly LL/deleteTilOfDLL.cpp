
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

// Function to delete the tail node
Node* deleteTail(Node* head) {

    // If DLL is empty or contains only one node
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }

    // Start from head
    Node* tail = head;

    // Traverse until the last node
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    // Store the second-last node
    Node* newTail = tail->back;

    // Make second-last node the new tail
    newTail->next = nullptr;

    // Remove backward connection of old tail
    tail->back = nullptr;

    // Delete the old tail node
    delete tail;

    // Return the original head
    return head;
}

// Function to print DLL
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

    // Delete tail node
    head = deleteTail(head);

    cout << "After deleting tail: ";
    print(head);

    return 0;
}
