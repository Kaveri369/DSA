#include <bits/stdc++.h>
using namespace std;

// Doubly Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Convert Array to Doubly Linked List
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

// Print DLL
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// Insert Before Head
Node* insertBeforeHead(Node* head, int val) {
    Node* newHead = new Node(val, head, nullptr);

    head->back = newHead;

    return newHead;
}

Node* insertBeforeTail(Node* head, int val) {
    if (head->next == NULL) {
        return insertBeforeHead(head, val);
    }

    Node* tail = head;

    while (tail->next != NULL) {
        tail = tail->next;
    }

    Node* prev = tail->back;
    Node* newNode = new Node(val, tail, prev);

    prev->next = newNode;
    tail->back = newNode;

    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2DLL(arr);

    head = insertBeforeTail(head, 10);

    print(head);

    return 0;
}