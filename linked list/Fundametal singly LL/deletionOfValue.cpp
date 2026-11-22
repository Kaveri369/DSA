
#include <bits/stdc++.h>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Convert array into Linked List
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

// Print Linked List
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Delete the node containing a given value
Node* removeEl(Node* head, int el) {

    // If Linked List is empty
    if (head == NULL) return head;

    // If the first node contains the value
    if (head->data == el) {
        Node* temp = head;
        head = head->next;

        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    // Traverse the Linked List
    while (temp != NULL) {

        // Check if current node contains the value
        if (temp->data == el) {

            // Disconnect the node
            prev->next = temp->next;

            // Delete the node
            delete temp;

            break;
        }

        // Move prev and temp forward
        prev = temp;
        temp = temp->next;
    }

    return head;
}

// Main function
int main() {

    vector<int> arr = {12, 5, 8, 7};

    // Convert array into Linked List
    Node* head = convertArr2LL(arr);

    cout << "Original Linked List: ";
    print(head);

    // Delete value 15
    head = removeEl(head, 15);

    cout << "After Deletion: ";
    print(head);

    return 0;
}
