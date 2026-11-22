
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

// Insert an element at a given position
Node* insertPosition(Node* head, int el, int k) {

    // If Linked List is empty
    if (head == NULL) {

        // If position is 1, create the first node
        if (k == 1) {
            return new Node(el);
        }
        else {
            return head;
        }
    }

    // If inserting at position 1 (head)
    if (k == 1) {
        return new Node(el, head);
    }

    int cnt = 0;
    Node* temp = head;

    // Traverse the Linked List
    while (temp != NULL) {

        cnt++;

        // Reach the node just before the required position
        if (cnt == (k - 1)) {

            // Create new node and connect it
            Node* x = new Node(el, temp->next);

            temp->next = x;

            break;
        }

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

    // Insert value 100 at position 3
    head = insertPosition(head, 100, 3);

    cout << "After Insertion: ";
    print(head);

    return 0;
}
