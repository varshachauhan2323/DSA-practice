/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *temp=head;
        ListNode *newnode=new ListNode(-1);
        ListNode *less=newnode;
        ListNode *gnode=new ListNode(-1);
        ListNode *greater=gnode;
        while(temp!=NULL){
            if(temp->val<x){
                less->next=temp;
                less=less->next;
            }
            else{
                greater->next=temp;
               greater= greater->next;
            }
            temp=temp->next;
        }
        greater->next=NULL;// if last node is the greatest one and after that is that smallest one then to disconnect the connections between them 
        less->next=gnode->next;
        return newnode->next;
    }
};