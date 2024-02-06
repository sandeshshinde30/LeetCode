class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = numbers[0];
        int right = numbers[numbers.size()-1];
        vector<int> res;

        while(left<right)
        {
            if(numbers[left]+numbers[right]==target)
            {
                res.push_back(left);
                res.push_back(right);
            }
            else if(numbers[left]+numbers[right]>target) right--;
            else left--;
        }

        return res;
    }
};
