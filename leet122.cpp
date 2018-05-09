class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        if (prices.size()>0) {
            int min=prices[0],max=-1,ans=0;
            for (i=1;i<prices.size();i++) {
                if (max==-1) {
                    if (prices[i]<=min) min=prices[i];
                    else max=prices[i];
                } else {
                    if (prices[i]>=max) max=prices[i];
                    else {
                        ans+=(max-min);
                        max=-1;
                        min=prices[i];
                    }
                }
            }
            if (max!=-1) {
                ans+=(max-min);
            }
            return ans;
        }
        return 0;
    }
};