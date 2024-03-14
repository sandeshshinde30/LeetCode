class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int,int> mp;
        int count = 0;
        int preSum = 0;

        for(int n : nums)
        {
            preSum += n;
            if(mp.find(preSum - goal)!=mp.end())
            {
                count += mp[preSum - goal];
            }
            if(preSum == goal) count++;
            mp[preSum]++;
        }
        return count;
    }
};