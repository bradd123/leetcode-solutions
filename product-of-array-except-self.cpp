class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int val=1;
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i]=val;
            val=val*nums[i];
        }
        val=1;
        for(int i=nums.size()-1;i>=0;i--){
            res[i]=res[i]*val;
            val=val*nums[i];
        }
        return res;
    }
};