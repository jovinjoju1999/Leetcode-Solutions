class Solution {
public:
    bool checkIfPangram(string sentence) {
       int n=sentence.size();
        unordered_map<char,int> mp;
        for(auto i:sentence)
        {
            mp[i]++;
        }
       for(char i='a'; i<='z';i++)
       {
           if(mp[i]==0)
               return false;
       }
        return true;
    }
};