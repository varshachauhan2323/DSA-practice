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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *dummynode=new ListNode(-1);
        ListNode *prev=dummynode;
        ListNode *temp=head;
        while(temp!=NULL){
            if(temp->next&&temp->val==temp->next->val){
                while(temp->next&&temp->val==temp->next->val){
                temp=temp->next;
            }   prev->next=temp->next;
            
            }
            else{
                prev->next=temp;
                prev=prev->next;
            }
            temp=temp->next;
        }
        return dummynode->next;
    }
};