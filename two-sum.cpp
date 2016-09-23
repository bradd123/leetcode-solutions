class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash.insert(make_pair(nums[i],i));
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            auto range=hash.equal_range(val);
            int flag=false;
            for(auto itr=range.first;itr!=range.second;itr++){
                if(i < itr->second){
                    res.push_back(i+1);
                    res.push_back(itr->second +1);
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
        return res;
    }
};