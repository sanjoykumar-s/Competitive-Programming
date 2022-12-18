class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int x = prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>x)
            {
                res+=prices[i]-x;
                x=prices[i];
            }
            else x=prices[i];
        }
        return res;
    }
};
