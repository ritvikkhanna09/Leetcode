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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newNode=new ListNode(1);
        ListNode* a=l1;
        ListNode* b=l2;
        ListNode* prev=nullptr;
        bool carry=false;
        
        int counta=0;
        int countb=0;
        while(a!=nullptr){
            counta++;
            a=a->next;
        }
        a=l1;
        while(b!=nullptr){
            countb++;
            b=b->next;
        }
        b=l2;
        
        
        if(counta>countb){
            while(b!=nullptr){
                a->val= (carry)?1+b->val+a->val:b->val+a->val;
                if(a->val > 9){
                    a->val-= 10;
                    carry=true;
                }else
                    carry=false;
                b=b->next;
                prev=a;
                a=a->next;
            }
            while(a!=nullptr){
                a->val= (carry)?1+a->val:a->val;
                if(a->val > 9){
                    a->val-= 10;
                    carry=true;
                }else
                    carry=false;
                prev=a;
                a=a->next;
            }
            if(carry){
                prev->next=newNode;
            }
            return l1;
        }
        else if(counta<countb){
            while(a!=nullptr){
                b->val= (carry)?1+b->val+a->val:b->val+a->val;
                if(b->val > 9){
                    b->val-= 10;
                    carry=true;
                }else
                    carry=false;
                prev=b;
                b=b->next;
                a=a->next;
            }
            while(b!=nullptr){
                b->val= (carry)?1+b->val:b->val;
                if(b->val > 9){
                    b->val-= 10;
                    carry=true;
                }else
                    carry=false;
                prev=b;
                b=b->next;
            }
            if(carry){
                prev->next=newNode;
            }
            return l2;
        }
        else if(counta==countb){
            while(b!=nullptr){
                a->val= (carry)?1+b->val+a->val:b->val+a->val;
                if(a->val > 9){
                    a->val -=10;
                    carry=true;
                }else
                    carry=false;
                b=b->next;
                prev=a;
                a=a->next;
            }
            if(carry){
                prev->next=newNode;
            }
            return l1;
        }
        return l1;
    }
};