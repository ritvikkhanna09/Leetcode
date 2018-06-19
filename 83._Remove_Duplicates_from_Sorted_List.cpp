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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
            return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        while(curr!=nullptr){
            if(curr->val!=prev->val){
                prev->next=curr;
                prev=curr;
                curr=curr->next;
            }
            else if (curr->val==prev->val){
                if(curr->next==nullptr){
                    prev->next=curr->next;
                }
                curr=curr->next;
            }
        }
        return head;
    }
};