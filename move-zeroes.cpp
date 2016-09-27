class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numZeroes = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i] == 0) numZeroes++;
        }
        int iter = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i] != 0){
                nums[iter] = nums[i];
                iter++;
            }
        }
        while(iter < nums.size()){
            nums[iter] = 0;
            iter++;
        }
    }
};