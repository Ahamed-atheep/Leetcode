class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < lists.size(); i++)
        {
            ListNode* head = lists[i];
            while(head != nullptr)
            {
                pq.push(head->val);
                head = head->next;
            }
        }

        ListNode* ans = new ListNode(0);  
        ListNode* tail = ans;

        while(!pq.empty())
        {
            ListNode* newnode = new ListNode(pq.top());
            pq.pop();

            tail->next = newnode;
            tail = newnode;
        }

        return ans->next;
    }
};