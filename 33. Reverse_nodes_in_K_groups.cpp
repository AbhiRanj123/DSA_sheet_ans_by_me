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
int getL(ListNode*head){
    ListNode*temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL){
            return head;
        }

        int length = getL(head);
        //Step1 : Reverse first k nodes

        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        int count=0;

        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }


        
        //Step 2: Recursively solve next one

        // if(next!=NULL){
        //     if((length-k)>=k){
        //     head->next=reverseKGroup(next,k);
        // }
        // else{
        //     head->next=reverseKGroup(head,k);
        // }
        // }
        if((length-count)>=k){
        head->next=reverseKGroup(next,k);
        }
        else{
            head->next=next;
        }
        return prev;
    }
};
