/*
Question Name: Insert a Node in Doubly Linked List
Platform: LeetCode
Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* insertAtHead(Node* head, int val) {
        Node* newNode = new Node(val);
        if (!head) return newNode;

        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
};
w