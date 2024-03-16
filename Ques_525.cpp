class Solution {
public:
    

    int findMaxLength(vector<int>& nums) {
        int maxLen = 0;        
        unordered_map<int,int> umap;
        umap[0] = -1;
        int sum = 0;

        for(int i=0;i<nums.size();i++)
        {
            sum += (nums[i]==0)?-1:1;
            if(umap.find(sum)!=umap.end())
            {
                int len = i - umap[sum];
                maxLen = max(maxLen,len);
            }
            else
            {
                umap[sum] = i;
            }
        }
        return maxLen;
    }
};