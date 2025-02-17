//! Next Greater Node In Linked List

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {

        //! Storing LL values in vector
        vector<int> ll;
        while(head){
            ll.push_back(head->val);
            head = head->next;
        }

        stack<int> st;
        vector<int> ans(ll.size());

        for(int i=0; i<ll.size(); i++){
            while(!st.empty() && ll[i] > ll[st.top()]){
                int kids = st.top();
                st.pop();
                ans[kids] = ll[i];
            }

            st.push(i);
        }

        return ans;
    }
};