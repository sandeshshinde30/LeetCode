class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // int j = 1;
        for(int i=0,j=1;i<n-1,j<n;i++,j++)
        {
            if(nums[i] == 0 && nums[j] != 0) swap(nums[i],nums[j]);
            else if(nums[i]==0 && nums[j]==0)
            {
                i = i-1;
            }
        }
    }
};
