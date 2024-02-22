class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &it : words){
            string temp = it;
            reverse(it.begin(), it.end());
            if(temp == it) return it;
        }
        return "";
    }
};