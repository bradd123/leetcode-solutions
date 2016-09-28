class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val=numeric_limits<int>::max(),capacity=0;
        for(int i=0;i<prices.size();i++){
            capacity=max(capacity,prices[i]-min_val);
            min_val=min(min_val,prices[i]);
        }
        return capacity;
    }
};