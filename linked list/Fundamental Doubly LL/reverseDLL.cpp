
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data, Node* next, Node* prev) {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

Node* convertArr2DLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);

        prev->next = temp;
        temp->prev = prev;

        prev = temp;
    }

    return head;
}

// Reverse Doubly Linked List
Node* reverseDLL(Node* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* prev = NULL;
    Node* current = head;

    while (current != NULL) {

        prev = current->prev;

        current->prev = current->next;
        current->next = prev;

        current = current->prev;
    }

    return prev->prev;
}

// Print DLL
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2DLL(arr);

    head = reverseDLL(head);

    print(head);

    return 0;
}
