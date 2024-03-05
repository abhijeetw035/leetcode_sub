class Solution {
public:
    int minimumLength(string s) {
        int low = 0, high = s.length()-1;
        while(low<high and s[low]==s[high]){
            char ch = s[low];
            while(low<=high and s[low]==ch) low++;
            while(low<=high and s[high]==ch) high--;
        }
        return (high - low + 1);
    }
};