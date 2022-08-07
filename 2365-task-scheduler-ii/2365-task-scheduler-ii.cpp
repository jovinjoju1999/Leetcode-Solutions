class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int,long long> mp;
        long long count=0;
        for(int i=0;i<tasks.size();i++)
        {
            count++;
            if(mp.count(tasks[i]) && count-mp[tasks[i]]<=space)
            {
                count+=space-(count-mp[tasks[i]])+1;
            }
            mp[tasks[i]]=count;
           
        }
        return count;
    }
};