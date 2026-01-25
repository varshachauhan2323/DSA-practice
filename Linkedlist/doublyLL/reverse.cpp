/*
Question Name: Reverse a Doubly Linked List
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* reverseDLL(Node* head) {
        Node* curr = head;
        Node* temp = nullptr;

        while (curr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }

        if (temp) head = temp->prev;
        return head;
    }
};
