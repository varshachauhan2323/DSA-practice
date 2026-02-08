/*
Question Name: Sort a Linked List of 0s, 1s and 2s
Platform: Coding Ninjas
Approach: Dummy Nodes
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Create three dummy lists for 0s, 1s and 2s.
- Traverse original list and attach nodes accordingly.
- Merge all three lists.
*/

Node* sortList(Node* head) {
    Node zero(0), one(0), two(0);
    Node *z = &zero, *o = &one, *t = &two;

    while (head) {
        if (head->data == 0) {
            z->next = head;
            z = z->next;
        } else if (head->data == 1) {
            o->next = head;
            o = o->next;
        } else {
            t->next = head;
            t = t->next;
        }
        head = head->next;
    }

    z->next = one.next ? one.next : two.next;
    o->next = two.next;
    t->next = NULL;

    return zero.next;
}
