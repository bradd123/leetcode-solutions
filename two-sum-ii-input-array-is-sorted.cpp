class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int begin = 0, end = numbers.size()-1;
        while(begin < end){
            int sum = numbers[begin] + numbers[end];
            if (sum == target){
                res.push_back(begin+1);
                res.push_back(end+1);
                break;
            }
            else if (sum < target){
                begin++;
            }
            else end--;
        }
        return res;
    }
};