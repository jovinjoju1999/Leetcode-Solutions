class Solution {
public:
    int percentageLetter(string s, char letter) {
        float count=0;
        float n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==letter)
                count++;
        }
        int k=(count*100/n);
        return k;
    }
};