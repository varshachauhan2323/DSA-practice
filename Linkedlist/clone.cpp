/*
Question Name: Copy List with Random Pointer
Platform: LeetCode
Approach: O(1) Space Interweaving Nodes
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Insert cloned nodes in between original nodes.
- Assign random pointers.
- Separate cloned list.
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        Node* curr = head;
        while (curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        curr = head;
        while (curr) {
            if (curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        curr = head;
        Node* copyHead = head->next;
        Node* copy = copyHead;

        while (curr) {
            curr->next = curr->next->next;
            if (copy->next)
                copy->next = copy->next->next;
            curr = curr->next;
            copy = copy->next;
        }

        return copyHead;
    }
};
