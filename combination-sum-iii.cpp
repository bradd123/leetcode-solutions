class Solution {
public:
    void combinationSum3_helper(int k,int n,int m,int sum,vector<int>& subset,vector<vector<int>>& res){
        if(subset.size()==k){
            if(sum==n){
                res.push_back(subset);
            }
            return;
        }
        for(int i=m;i<9;i++){
            subset.push_back(i+1);
            sum+=(i+1);
            combinationSum3_helper(k,n,i+1,sum,subset,res);
            subset.pop_back();
            sum-=(i+1);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> subset;
        vector<vector<int>> res;
        combinationSum3_helper(k,n,0,0,subset,res);
        return res;
    }
};