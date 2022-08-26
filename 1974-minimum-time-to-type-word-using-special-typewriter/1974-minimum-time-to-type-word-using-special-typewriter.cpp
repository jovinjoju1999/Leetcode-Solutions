class Solution {
public:
    int minTimeToType(string word) {
        int count=min(abs('a'-word[0]),26-abs('a'-word[0]))+1;
      for(int i=1;i<word.size();i++)
      {
          count++;
          int k=min(abs(word[i]-word[i-1]),26-abs(word[i]-word[i-1]));
          count+=k;
      }
        return count;
    }
};