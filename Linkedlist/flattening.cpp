/*
Question Name: Flattening of a Linked List
Platform: GeeksForGeeks
Approach: Merge Sort on Linked Lists
Time Complexity: O(n log n)
Space Complexity: O(1)
Explanation:
- Recursively flatten right list.
- Merge current list with flattened list.
*/

Node* merge(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    Node* result;
    if (a->data < b->data) {
        result = a;
        result->bottom = merge(a->bottom, b);
    } else {
        result = b;
        result->bottom = merge(a, b->bottom);
    }
    result->next = NULL;
    return result;
}

Node* flatten(Node* root) {
    if (!root || !root->next) return root;

    root->next = flatten(root->next);
    root = merge(root, root->next);

    return root;
}
