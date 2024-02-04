class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        int s = nums.size()/2;
        sort(nums.begin(),nums.end());
        int c = 1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                c++;
            }
            else
            {
                c=1;
            }
            if(c>s) return nums[i-1];
        }
        return nums[0];
    }
};