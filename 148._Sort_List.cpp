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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr)
            return head;
        ListNode* curr=head;
        vector<int> arr;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* newNode=new ListNode(arr[0]);
        head=newNode;
        curr=newNode;
        for(int i=1;i<arr.size();i++){
            ListNode* newNode=new ListNode(arr[i]);
            curr->next=newNode;
            curr=newNode;
        }
        return head;
    }
};