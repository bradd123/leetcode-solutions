class Solution {
public:
    int majorityElement(vector<int> &num) {
        int sz = num.size();
        int val=num[0];
        int count=1;
        for(int i=1;i<sz;i++){
            if(count==0){
                val=num[i];
                count=1;
            }
            else if(num[i]==val) count++;
            else{
                count--;
            }
        }
        return val;
    }
};