class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0;
        k = k%n;

        // for(int i=0;i<n-k-1;i++)
        // {
        //     int temp = nums[i];
        //     nums[i] = nums[n-k-i-1];
        //     nums[n-k-i-1] = temp;
        // }

        reverse(nums.begin(),nums.begin()+(n-k));

        // for(int i=n-k;i<n;i++)
        // {
        //     int temp = nums[n-k];
        //     nums[n-k] = nums[n-c];
        //     nums[n-c] = temp;
        //     c++;
        // }

        reverse(nums.begin()+(n-k),nums.end());

        // for(int i=0;i<n;i++)
        // {
        //     int temp = nums[i];
        //     nums[i] = nums[n-i];     
        //     nums[n-i] = temp;   
        // }

        reverse(nums.begin(),nums.end());
    }
};
