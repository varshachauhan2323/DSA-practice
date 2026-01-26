/*
Question Name: Introduction to Doubly Linked List
Platform: LeetCode
Time Complexity: O(1)
Space Complexity: O(1)
*/

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};
    