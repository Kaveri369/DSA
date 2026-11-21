
#include <bits/stdc++.h>
using namespace std;

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

// Print linked list
void print(Node* head) {

    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

// Remove tail of linked list
Node* removeTail(Node* head) {

    // Empty list or single node
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    Node* temp = head;

    // Reach second-last node
    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete last node
    delete temp->next;

    // Set second-last node's next to NULL
    temp->next = nullptr;

    return head;
}

int main() {

    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2LL(arr);

    // Remove last node
    head = removeTail(head);

    // Print updated linked list
    print(head);

    return 0;
}
