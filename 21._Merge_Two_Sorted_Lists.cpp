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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2==nullptr)
            return nullptr;
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        ListNode* head=nullptr;
        ListNode* curr=nullptr;
        if(l1->val < l2->val){
            head=l1;
            l1=l1->next;
        }
        else{
            head=l2;
            l2=l2->next;
        }
        curr=head;
        while(l1!=nullptr && l2!=nullptr){
            // cout<<curr->val<<" "<<l1->val<<" "<<l2->val<<endl;
            if(l1->val > l2->val){
                curr->next=l2;
                curr=curr->next;
                l2=l2->next;
            }else{
                curr->next=l1;
                curr=curr->next;
                l1=l1->next;
            }
        }
        if(l1==nullptr)
            curr->next=l2;
        if(l2==nullptr)
            curr->next=l1;
        return head;
    }
};