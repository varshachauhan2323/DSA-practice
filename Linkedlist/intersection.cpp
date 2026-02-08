/*
Question Name: Intersection of Two Linked Lists
Platform: LeetCode
Approach: Two Pointer Traversal
Time Complexity: O(n + m)
Space Complexity: O(1)
Explanation:
- Traverse both lists.
- When one pointer reaches end, switch to other list.
- They meet at intersection node.
*/

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while (a != b) {
            a = a ? a->next : headB;
            b = b ? b->next : headA;
        }
        return a;
    }
};
