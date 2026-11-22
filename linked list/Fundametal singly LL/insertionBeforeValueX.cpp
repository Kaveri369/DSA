
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

    // Constructor with next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
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

// Insert a node before a given value
Node* insertBeforeValue(Node* head, int el, int val) {

    // If Linked List is empty
    if (head == NULL) {
        return NULL;
    }

    // If the head itself contains the given value
    if (head->data == val) {
        return new Node(el, head);
    }

    Node* temp = head;

    // Traverse until the node before the required value
    while (temp->next != NULL) {

        // Check whether the next node contains the given value
        if (temp->next->data == val) {

            // Create new node and connect it before the given value
            Node* x = new Node(el, temp->next);

            // Connect previous node to the new node
            temp->next = x;

            break;
        }

        // Move to the next node
        temp = temp->next;
    }

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

    // Insert 100 before value 7
    head = insertBeforeValue(head, 100, 7);

    cout << "After Insertion: ";
    print(head);

    return 0;
}
