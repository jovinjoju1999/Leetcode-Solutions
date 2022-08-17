class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int k=mp[s[0]];
        for(auto it:mp)
        {
            if(it.second!=k)
            {
                return false;
            }
        }
        return true;
    }
};