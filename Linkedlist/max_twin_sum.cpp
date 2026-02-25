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
    int pairSum(ListNode* head) {
        if(head->next->next==NULL) return head->val+head->next->val;
        ListNode *fast=head->next;
        ListNode *slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *curr=slow->next;
        slow->next=NULL;
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode *temp1=head;
        ListNode *temp2=prev;
        int sum=0;
        int maxsum=0;
        while(temp2!=NULL){
            sum=temp1->val+temp2->val;
            maxsum=max(sum,maxsum);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return maxsum;
    }
};