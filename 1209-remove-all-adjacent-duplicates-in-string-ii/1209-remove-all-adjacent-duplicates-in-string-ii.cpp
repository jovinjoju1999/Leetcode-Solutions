class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<int> st;
        string m;
        vector<int> count(n,1);
        st.push(0);
        for(int i=1;i<n;i++)
        {
            if(!st.empty())
            {
                if(s[st.top()]==s[i]) 
                {
                    count[i] = count[st.top()] + 1;
                }
            }
        
        st.push(i);
        if(count[st.top()]==k) 
        {
            for(int i=0;i<k;i++)
            {
                st.pop();
            }
        }
        
        }
        while(!st.empty())
        {
            m+=s[st.top()];
            st.pop();
        }
        reverse(m.begin(),m.end());
        return m;
        return 0;
    }
};
