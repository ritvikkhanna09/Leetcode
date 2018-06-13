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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr&&head->val==val){
            head=head->next;
        }
        if(head==nullptr)
            return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        while(curr!=nullptr){
            if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};