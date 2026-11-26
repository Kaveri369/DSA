
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

// Delete head node
Node* deleteHead(Node* head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* prev = head;
    head = head->next;

    head->back = nullptr;

    delete prev;
    return head;
}

// Delete tail node
Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* tail = head;

    while (tail->next != NULL) {
        tail = tail->next;
    }

    Node* newTail = tail->back;
    newTail->next = nullptr;

    tail->back = nullptr;
    delete tail;

    return head;
}

// Delete Kth element from DLL
Node* removeKthElement(Node* head, int k) {

    if (head == NULL) {
        return NULL;
    }

    int cnt = 0;
    Node* kNode = head;

    // Find the Kth node
    while (kNode != NULL) {
        cnt++;

        if (cnt == k) {
            break;
        }

        kNode = kNode->next;
    }

    // If K is invalid
    if (kNode == NULL) {
        return head;
    }

    Node* prev = kNode->back;
    Node* front = kNode->next;

    // Only one node
    if (prev == NULL && front == NULL) {
        delete kNode;
        return NULL;
    }

    // Deleting head
    else if (prev == NULL) {
        return deleteHead(head);
    }

    // Deleting tail
    else if (front == NULL) {
        return deleteTail(head);
    }

    // Deleting middle node
    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;

    delete kNode;

    return head;
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

    head = removeKthElement(head, 1);

    print(head);

    return 0;
}
