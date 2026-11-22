#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;  // Pointer to the previous node

    // Constructor 1: Initialize with data and pointers
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    // Constructor 2: Initialize with data only
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
