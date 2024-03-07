// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int maxi=*max_element(nums.begin(),nums.end());
//         for(int i=0 ; i<nums.size(); i++){
//             if(maxi == nums[i]) return i;
//         }
//         return 0;
//     }
// };

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0;
        else if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        int low = 1, high = nums.size()-2;
        while(low<=high){
            int mid = (high + low)/2;
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1]) return mid;
            else if(nums[mid]>nums[mid-1] and nums[mid]<nums[mid+1]) low = mid + 1;
            else high = mid - 1;
        }
        return 0;
    }
};