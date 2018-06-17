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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)
            return head;
        if(n==0)
            return head;
        int count=1,dest;
        ListNode* curr=head;
        while(curr->next!=nullptr){
            count++;
            curr=curr->next;
        }
        dest=count-n;
        if(dest==0){
            return head->next;
        }
        curr=head;
        for(int i=1;i<dest;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
        
    }
};