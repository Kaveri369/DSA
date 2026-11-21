#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;       // Stores the value of the node
    Node* next;     // Pointer to the next node

public:
    // Constructor 1: Creates a node with data and next pointer
    Node(int data1, Node* next1) {
        data = data1;       // Assign data to the node
        next = next1;       // Assign address of next node
    }

public:
    // Constructor 2: Creates a node with only data
    Node(int data1) {
        data = data1;       // Assign data to the node
        next = nullptr;    // No next node initially
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i =1; i<arr.size(); i++){
        Node* temp= new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
    }
    return head;
}

int main() {

    // Creating an array
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    // Traverse and print the complete linked list
    Node* temp = head;

    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
// time complexity: simply traversing:-> 0(n)
// space complexity : o(n)

// travers to the ll:
int main() {
    vector<int> arr = {2, 5, 8, 7};

    Node* head = convertArr2LL(arr);

    Node* temp = head;

    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}