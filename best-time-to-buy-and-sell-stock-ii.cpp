class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val=numeric_limits<int>::max(),capacity=0,sum=0;
        for(int i=0;i<prices.size();i++){
            //capacity=max(capacity,prices[i]-min_val);
            if(i>0) sum=max(sum,sum+(prices[i]-prices[i-1]));
            //min_val=min(min_val,prices[i]);
        }
        return sum;
    }
};