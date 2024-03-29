class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       
       // Marking all negative and zero values as size of array
       for(int i=0;i<nums.size();i++)
       {
          if(nums[i]<=0 || nums[i]>=nums.size()+1) nums[i] = nums.size()+1;
       }

        // Marking all the elements of found indexes as negative
        for(int i=0;i<nums.size();i++)
        {
            int s = abs(nums[i]);

            if(s==nums.size()+1)
            {
                continue;
            }        
            int seat = s-1;
            if(nums[seat]>0)
            {
                nums[seat] = nums[seat] * -1;
            }
        }

        // If any index element is positive means that index+1 is missing positive number
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) return i+1;
        } 

       return nums.size()+1;
    }
};
