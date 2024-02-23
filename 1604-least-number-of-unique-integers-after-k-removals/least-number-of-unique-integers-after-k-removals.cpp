class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto &it : nums){
            mp[it]++;
        }
        vector<int> vec;

        for(auto &it : mp){
            vec.push_back(it.second);
        }
        sort(vec.begin(), vec.end());
        int cnt = 0;
        for(auto &it : vec){
            if(k>=it){
                k -= it;
                cnt++;
            }
            else break;
        }
        return vec.size() - cnt;
    }
};