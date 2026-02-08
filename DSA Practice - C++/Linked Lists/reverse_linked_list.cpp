#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// LeetCode 206: Reverse Linked List
// Time Complexity: O(n)
// Space Complexity: O(1)

ListNode* reverseList(ListNode* head) {

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    while (curr != NULL) {
        next = curr->next;   // next node save
        curr->next = prev;   // reverse link
        prev = curr;         // move prev
        curr = next;         // move curr
    }

    return prev; // new head
}

// helper function to print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {

    // Linked list: 1 -> 2 -> 3 -> 4 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    head = reverseList(head);

    printList(head);

    return 0;
}
