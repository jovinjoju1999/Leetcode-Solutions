class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
       stack<int> st;
        vector<int> v(size(T));
        
        for(int i=0;i<size(T);i++)
        {
            while(st.size()!=0 && T[i]>T[st.top()])
            {
                v[st.top()]=i-st.top();
                st.pop();
                
            }
            st.push(i);
        }
        return v;
    }
};