
#include <bits/stdc++.h>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// Convert Array into Linked List
Node* convertArr2LL(vector<int>& arr) {

    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {

        Node* temp = new Node(arr[i], nullptr);

        mover->next = temp;
        mover = temp;
    }

    return head;
}

// Insert a new node at the head
Node* insertHead(Node* head, int val) {

    // Create a new node and point it to the current head
    return new Node(val, head);
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

    // Insert 100 at the head
    head = insertHead(head, 100);

    cout << "After Inserting at Head: ";
    print(head);

    return 0;
}
