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

// Find length of linked list
int lengthOfLL(Node* head) {
    int cnt = 0;
    Node* temp = head;

    while(temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    cout << lengthOfLL(head);
    return 0;
}

// search the elemnt:

int checkIfPresent(Node* head, int val) {

    Node* temp = head;

    while(temp) {

        if(temp->data == val) 
            return 1;

        temp = temp->next;
    }

    return 0;
}

int main() {

    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2LL(arr);

    cout << checkIfPresent(head, 5);
}