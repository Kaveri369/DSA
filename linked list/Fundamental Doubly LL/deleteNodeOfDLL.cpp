
#include <bits/stdc++.h>
using namespace std;

// Structure of DLL Node
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

// Convert array into Doubly Linked List
Node* convertArr2DLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);

        prev->next = temp;
        temp->back = prev;

        prev = temp;
    }

    return head;
}

// Delete a given node
void deleteNode(Node* temp) {

    Node* prev = temp->back;
    Node* front = temp->next;

    // If the node is the last node
    if (front == NULL) {
        prev->next = nullptr;
        temp->back = nullptr;

        free(temp);
        return;
    }

    // Connect previous and next nodes
    prev->next = front;
    front->back = prev;

    // Disconnect the node
    temp->next = temp->back = nullptr;

    free(temp);
}

// Print DLL
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2DLL(arr);

    deleteNode(head->next);  // Delete node containing 5

    print(head);

    return 0;
}
