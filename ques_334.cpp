class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=INT_MAX;
        int j=INT_MAX;

        if(nums.size()<3) return false;
        for(int c : nums)
        {
            if(c<=i)
            {
                i = c;
            }
            else if(c<=j)
            {
                j = c;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
