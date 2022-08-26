class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int> mp;
        for(int i=0;i<brokenLetters.size();i++)
        {
            mp[brokenLetters[i]]++;
        }
        bool check=true;
        int count=0;
        for(int i=0;i<text.size();i++)
        {
            if(mp[text[i]]>0)
            {
                check=false;
            }
            if((text[i]==' ' || i+1==text.size()) && check==true)
            {
                count++;
            }
            else if(text[i]==' ' && check==false)
            {
                check=true;
            }
        }
        return count;
    }
};