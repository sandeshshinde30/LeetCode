class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = 0;
        int n2 = n1;

        while(nums1.size()-1>=n1 && nums2.size()-1>=n2)
        {
            if(nums1[n1]==nums2[n2])
            {
                return nums1[n1];
                break;
            } 
           else if(nums1[n1]<nums2[n2]) n1++;
           else n2++;
        }

        return -1;
    }
};