class Solution {
public:
    void combinationSum2_helper(vector<int>& candidates,int target,int m,int sum,vector<int>& subset,vector<vector<int>>& res){
        if(sum>target) return;
        if(sum==target){
            res.push_back(subset);
            return;
        }
        for(int i=m;i<candidates.size();i++){
            if(i!=m&&candidates[i]==candidates[i-1]) continue;
            subset.push_back(candidates[i]);
            sum+=candidates[i];
            combinationSum2_helper(candidates,target,i+1,sum,subset,res);
            subset.pop_back();
            sum-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> subset;
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        combinationSum2_helper(candidates,target,0,0,subset,res);
        return res;
    }
};