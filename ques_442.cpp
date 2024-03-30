class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            int index = abs(nums[i]);
            int seat = index-1;
            if(nums[seat]<0) res.push_back(index);
            else nums[seat] = nums[seat] * -1;
        }

        //               Another Way
        // vector<int> res(n,0);
        // if(n==1) return {};
        // for(int i=0;i<n;i++)
        // {
        //     int s = abs(nums[i]);
        //     if(s==n) res[0]++;
        //     else res[s]++;
        // }

        // if(res[0]>=2) res.push_back(n);
        // for(int i=1;i<n;i++)
        // {
        //     if(res[i]>=2) res.push_back(i); 
        // }

        // res.erase(res.begin(),res.begin()+n);
        return res;
    }
};
