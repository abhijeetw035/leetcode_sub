class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

    for(int i=0; i<s.length(); i++){
        if(mp[s[i]]<mp[s[i+1]]) ans -= mp[s[i]];
        else ans += mp[s[i]];
    }
    return ans;
    }
};