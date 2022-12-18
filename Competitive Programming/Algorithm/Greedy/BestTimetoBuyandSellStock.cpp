class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mx[n+1];
        int mn[n+1];
        mn[0]=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            mn[i]=min(mn[i-1],prices[i]);
        }
        mx[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)mx[i]=max(prices[i],mx[i+1]);
        int res=0;
        for(int i=0;i<n;i++)
        {
            res=max(res,mx[i]-mn[i]);
        }return res;
    }
};
