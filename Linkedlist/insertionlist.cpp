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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *dummynode=new ListNode(-1);
        while(head){
            ListNode *nextnode=head->next;
            ListNode *prev=dummynode;
            while(prev->next!=NULL&&prev->next->val<head->val){
                prev=prev->next;
            }
            head->next=prev->next;
            prev->next=head;
            head=nextnode;
        }
        return dummynode->next;
    }
};