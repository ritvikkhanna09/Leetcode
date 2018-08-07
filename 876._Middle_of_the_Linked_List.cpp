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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr)
            return head;
        if(head->next==nullptr)
            return head;
        if(head->next->next==nullptr)
            return head->next;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;
        int count=0;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next==nullptr){
            // cout<<"ihnere";
            return slow;
        }
        else return slow->next;
    }
};