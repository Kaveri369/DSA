
#include <bits/stdc++.h>
using namespace std;

// Structure of Linked List Node
struct Node {
    int data;
    Node* next;

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

// Print Linked List
void print(Node* head) {

    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

// Delete Kth element of Linked List
Node* removeK(Node* head, int k) {

    // If linked list is empty
    if(head == NULL) return head;

    // If K = 1, delete the head
    if(k == 1) {

        Node* temp = head;

        head = head->next;

        delete temp;

        return head;
    }

    int cnt = 0;

    Node* temp = head;
    Node* prev = NULL;

    // Traverse the linked list
    while(temp != NULL) {

        cnt++;

        // When kth node is found
        if(cnt == k) {

            prev->next = prev->next->next;

            delete temp;

            break;
        }

        // Move pointers forward
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main() {

    // Creating an array
    vector<int> arr = {12, 5, 8, 7};

    // Converting array into linked list
    Node* head = convertArr2LL(arr);

    // Delete the kth element (k = 2)
    head = removeK(head, 2);

    // Print updated linked list
    print(head);

    return 0;
}
