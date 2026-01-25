/*
Question Name: Insert a Node in Linked List
Platform: LeetCode
Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* insertAtHead(ListNode* head, int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        return newNode;
    }
};
