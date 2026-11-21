/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

// Define Linked List Node
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    void deleteNode(ListNode* node) {

        // Store the next node's value in current node
        node->val = node->next->val;

        // Store the next node in temp
        ListNode* temp = node->next;

        // Connect current node to the next-to-next node
        node->next = node->next->next;

        // Delete the next node
        delete temp;
    }
};
