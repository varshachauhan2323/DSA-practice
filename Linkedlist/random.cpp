/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insert(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            Node *copynode=new Node(temp->val);
            copynode->next=temp->next;
            temp->next=copynode;
            temp=temp->next->next;

        }    }
    void random(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            Node*copynode=temp->next;
           if(temp->random) copynode->random=temp->random->next;
           else copynode->random=NULL;
           temp=temp->next->next;
        }
    }
    Node *deepcopy(Node *head){
        Node *temp=head;
        Node *dummynode=new Node(-1);
        Node *res=dummynode;
        while(temp!=NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummynode->next;
    }
    Node* copyRandomList(Node* head) {
        insert(head);
        random(head);
        return deepcopy(head);
    }
};