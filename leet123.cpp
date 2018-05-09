class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        if (prices.size()>0) {
            int min=prices[0],max=-1,max1=0,max2=0;
            for (i=1;i<prices.size();i++) {
                if (max==-1) {
                    if (prices[i]<=min) min=prices[i];
                    else max=prices[i];
                } else {
                    if (prices[i]>=max) max=prices[i];
                    else {
                        if (max1<max-min) {
                            max2=max1;
                            max1=max-min;
                        } else if (max2<max-min) {
                            max2=max-min;
                        }
                        max=-1;
                        min=prices[i];
                    }
                }
            }
            if (max!=-1) {
                if (max1<max-min) {
                            max2=max1;
                            max1=max-min;
                        } else if (max2<max-min) {
                            max2=max-min;
                        }
            }
            return max1+max2;
        }
        return 0;
    }
};