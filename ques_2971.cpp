class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        if(nums.size()<3) return -1;
       sort(nums.begin(),nums.end());
       long long perimeter = -1;
       long long sum;
       sum = nums[0]+nums[1];
       
       for(int i=2;i<nums.size();i++)
       {
           if(sum>nums[i])
           {
               perimeter = max(perimeter,sum + nums[i]);
           }

           sum += nums[i];
       }

       return perimeter;
    }
};