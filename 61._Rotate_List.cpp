/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
            return head;
        if(k==0)
            return head;
        int count=1,dest;
        ListNode* curr=head;
        while(curr->next!=nullptr){
            curr=curr->next;
            count++;
        }
        curr->next=head;
        curr=head;
        k=k%count;
        // cout<<k<<""<<count;
        dest=count-k-1;
        for(int i=1;i<=dest;i++){
            curr=curr->next;
        }
        head=curr->next;
        curr->next=nullptr;
        return head; 
        
    }
};