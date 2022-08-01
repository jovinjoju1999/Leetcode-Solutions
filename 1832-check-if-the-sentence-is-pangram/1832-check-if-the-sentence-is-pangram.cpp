class Solution {
public:
    bool checkIfPangram(string sentence) {
       int n=sentence.size();
        unordered_map<char,int> mp;
        for(auto i:sentence)
        {
            mp[i]++;
        }
      return mp.size()==26;
    }
};