class Solution {
public:
    string sortString(string s) {
        unordered_map<char, int> mp;
       for(int i=0;i<s.size();i++)
       {
           mp[s[i]]++;
       }
        string out="";
        while(out.size()<s.size())
        {
        for(char i='a';i<='z';i++)
        {
            if(mp[i]>0)
            {
                out+=i;
                mp[i]--;
            }
        }
         for(char j='z';j>='a';j--)
        {
            if(mp[j]>0)
            {
                out+=j;
                mp[j]--;
            }
            
        }
        }
        
        
    return out;
        
        
        
        
    }
};