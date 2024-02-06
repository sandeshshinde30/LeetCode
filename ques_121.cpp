class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left = 0;
        int n = prices.size(); 
        // int buy = INT_MAX;
        // int sell = INT_MIN;
        int right = 1;
        int cProfit = 0;
        int profit = 0;

        // if(prices.size()==1) return 0;

        // while(left<right)
        // {
        //    if(prices[left]>prices[right])
        //    {
        //        left++;
        //        buy = min(buy,prices[left]);
        //    }
        //    else if(prices[right]<prices[left])
        //    {
        //        sell = max(sell,prices[right]); 
        //        right--;   
        //    }
        //    profit = max(profit,prices[right]-prices[left]);
        // }

        while(right < n)
        {
            cProfit = prices[right]-prices[left];

            if(prices[left]<prices[right])
            {
                profit = max(cProfit,profit);
            }
            else left = right;
            right++;
        }

        return profit;
    }
};
