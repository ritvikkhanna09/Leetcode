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
    bool isPalindrome(ListNode* head) {
        vector<string> arr;
        ListNode* back=head;
        while(back!=nullptr){
            arr.push_back(to_string(back->val));
            back=back->next;
        }
        for(auto& i:arr)
            cout<<i<<" ";
        int n=arr.size();
        for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-i-1])
                return false;
        }
        return true;
        
    }
};