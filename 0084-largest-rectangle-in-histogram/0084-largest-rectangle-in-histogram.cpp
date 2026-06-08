class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxi=0;
        int n=heights.size();
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty() && heights[i]<heights[st.top()])
            {
                int h=heights[st.top()];
                st.pop();
                int w=st.empty()?i:i-st.top()-1;
                maxi=max(maxi,h*w);
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int h=heights[st.top()];
            st.pop();
            int w=st.empty()?n:n-st.top()-1;
            maxi=max(maxi,h*w);
        }
        return maxi;
    }
};