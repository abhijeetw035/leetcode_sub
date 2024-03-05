class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        else if(nums[0]!=nums[1]) return nums[0];
        else if(nums[nums.size()-2]!=nums[nums.size()-1]) return nums[nums.size()-1];
        int low = 1, high=nums.size()-2;
        while(high>=low){
            int mid = (low + high) /2;
            if(nums[mid]!=nums[mid+1] and nums[mid]!=nums[mid-1]) return nums[mid];
            else if((mid%2!=0 and nums[mid]==nums[mid-1]) || (mid%2==0 and nums[mid]==nums[mid+1])){
                low = mid + 1;
            }
            else high = mid - 1;
            
    }
    return 0;
    }
};