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
ListNode * reverse(ListNode *curr){
    ListNode *prev=NULL;
    ListNode *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *revhead1=reverse(l1);
        ListNode *revhead2=reverse(l2);
        ListNode *temp1=revhead1;
        ListNode *temp2=revhead2;
        int sum=0;
        int carry=0;
        ListNode * dummynode=new ListNode(-1);
        ListNode *temp=dummynode;
        while(temp1!=NULL||temp2!=NULL){
            sum=carry;
            if(temp1) {sum+=temp1->val;
            temp1=temp1->next;}
            if(temp2) {sum+=temp2->val;
                        temp2=temp2->next;
            }
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            temp=temp->next;
        }
        if(carry){
           ListNode*head= reverse(dummynode->next);
           ListNode*newnode=new ListNode(carry);
           newnode->next=head;
           return newnode;

        }
        ListNode *newnode =reverse(dummynode->next);
        return newnode;

    }
};