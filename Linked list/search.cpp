/*
Question Name: Search an Element in Linked List
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        while (head) {
            if (head->val == key) return true;
            head = head->next;
        }
        return false;
    }
};
