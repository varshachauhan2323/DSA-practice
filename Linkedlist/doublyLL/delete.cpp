/*
Question Name: Delete a Node in Doubly Linked List
Platform: LeetCode
Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* deleteNode(Node* head, Node* del) {
        if (!head || !del) return head;

        if (head == del) head = del->next;
        if (del->next) del->next->prev = del->prev;
        if (del->prev) del->prev->next = del->next;

        delete del;
        return head;
    }
};
