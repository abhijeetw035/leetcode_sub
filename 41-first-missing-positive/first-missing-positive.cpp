class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        map<int,int> mp;
        for(auto &it : nums){
            mp[it]++;
        }
        bool cond = false;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(i+1)==mp.end()){
                cond = true;
                return i+1;
            }
        }
        if(cond == false) return maxi+1;
        return INT_MAX;
    }
};