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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> values;
        while(head!=NULL)
        {
            values.push_back(head->val);
            head=head->next;
        
        }
        int n=values.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&values[i]>values[st.top()])
            {
                int index=st.top();
                st.pop();
                ans[index]=values[i];
            }
            st.push(i);
        }

     return ans;   
    }
};