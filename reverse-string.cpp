class Solution {
public:
    string reverseString(string s) {
        string ret_str = "";
        for(int i=s.length()-1;i>=0;i--){
            ret_str = ret_str + s[i];
        }
        return ret_str;
    }
};