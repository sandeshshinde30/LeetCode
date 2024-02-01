class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int s = nums.size();

        if(s%3 != 0)
            return {};

        vector<vector<int>> res(s/3,vector<int>(3,0));
        int index = 0;

        sort(nums.begin(),nums.end());

        for(int i = 0;i<s;i+=3)
        {
            if(i+2 < s && nums[i+2]-nums[i]<=k)
            {
                res[index++] = {nums[i],nums[i+1],nums[i+2]};
            }
            else
            {
                return vector<vector<int>>();
            }
        }
        return res;        
    }
};