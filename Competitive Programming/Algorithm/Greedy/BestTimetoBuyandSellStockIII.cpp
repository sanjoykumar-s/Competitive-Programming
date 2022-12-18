class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l[n+1];
        int r[n+1];
        l[0]=0;
        r[n-1]=0;
        int mn = prices[0];
        for(int i=1;i<n;i++)
        {
            int profit = max(0,prices[i]-mn);
            mn=min(mn,prices[i]);
            l[i]=max(profit,l[i-1]);
        }
        mn=prices[n-1];

        for(int i=n-2;i>=0;i--)
        {
           int profit = max(0,mn-prices[i]);
            mn=max(mn,prices[i]);
            r[i]=max(profit,r[i+1]);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            //cout << l[i] << " " << r[i] << endl;
            res = max(res,l[i]+r[i]);
        }
        return res;
    }
};
