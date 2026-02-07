/*
Question Name: Add 1 to a Number Represented by Linked List
Platform: GeeksForGeeks
Approach: Reverse + Carry
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Reverse the linked list.
- Add 1 with carry.
- Reverse again to get final answer.
*/

Node* reverse(Node* head) {
    Node* prev = NULL;
    while (head) {
        Node* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

Node* addOne(Node* head) {
    head = reverse(head);
    Node* curr = head;
    int carry = 1;

    while (curr && carry) {
        int sum = curr->data + carry;
        curr->data = sum % 10;
        carry = sum / 10;

        if (!curr->next && carry)
            curr->next = new Node(0);

        curr = curr->next;
    }
    return reverse(head);
}
