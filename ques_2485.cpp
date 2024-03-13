class Solution {
public:
    int pivotInteger(int n) {
        int totSum = n*(n+1)/2;

        for(int i=1;i<=n;i++)
        {
           int preSum = i*(i+1)/2;
           int postSum = totSum - preSum;

           if((preSum-i) == postSum) return i;  
        }

        return -1;
    }
};