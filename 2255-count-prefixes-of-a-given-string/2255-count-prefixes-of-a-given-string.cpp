class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        vector<string> str;
        string p="";
        for(int i=0;i<s.size();i++)
        {
            p+=s[i];
            str.push_back(p);
        }
        unordered_map<string, int> mp;
        for(auto i:str)
        {
            mp[i]++;
        }
        for(auto i:words)
        {
            if(mp[i]>0)
                count++;
        }
        return count;
    }
};