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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)
            return head;
        if(head->next==nullptr)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* firsteven=even;
        // cout<<odd->val<<" "<<even->val<<endl;     
        while(odd->next!=nullptr &&even->next!=nullptr){
            odd->next=even->next;
            odd=odd->next;
            if(even->next->next!=nullptr){
                even->next=odd->next;
                even=even->next;
            }
            // cout<<odd->val<<" "<<even->val<<endl;
        }
        even->next=nullptr;
        odd->next=firsteven;
        // cout<<odd->val<<" "<<even->val<<endl;
        return head;
    }
};