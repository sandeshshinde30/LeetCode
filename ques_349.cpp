class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>intersect;
        set<int>set1(nums1.begin(),nums1.end());
        vector<int>interSection;

        for(int n2 : nums2)
        {
            if(set1.count(n2)>0)
            {
                intersect.insert(n2);
            }
        }

        for(auto a : intersect)
        {
            interSection.push_back(a);
        }

        return interSection;
    }
};