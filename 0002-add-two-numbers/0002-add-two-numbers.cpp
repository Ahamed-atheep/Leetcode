/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* Add(ListNode* l1, ListNode* l2,int carry)
    {
        int sum=carry;
        if(!l1 && !l2 && carry==0) return nullptr;
        if(l1)
        sum+=l1->val;
        if(l2)
        sum+=l2->val;
        ListNode* Result=new ListNode(sum%10);
        carry=sum/10;
        Result->next=Add(l1 ? l1->next : nullptr, l2 ? l2->next : nullptr, carry);
        return Result;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return Add(l1,l2,0);
    }
};