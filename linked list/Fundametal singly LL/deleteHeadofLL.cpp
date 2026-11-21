
#include <bits/stdc++.h>
using namespace std;

// Structure of a linked list node
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Convert array into linked list
Node* convertArr2LL(vector<int> &arr) {

    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);

        mover->next = temp;
        mover = temp;
    }

    return head;
}

// Function to print linked list
void print(Node* head) {

    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

// Function to delete the head of linked list
Node* removesHead(Node* head) {

    // If linked list is empty, return NULL
    if(head == NULL) return head;

    // Store the current head in temp
    Node* temp = head;

    // Move head to the second node
    head = head->next;

    // Delete the previous head node
    delete temp;

    // Return the updated head
    return head;
}

int main() {

    // Creating an array
    vector<int> arr = {12, 5, 8, 7};

    // Converting array into linked list
    Node* head = convertArr2LL(arr);

    // Deleting the first node
    head = removesHead(head);

    // Printing updated linked list
    print(head);

    return 0;
}
