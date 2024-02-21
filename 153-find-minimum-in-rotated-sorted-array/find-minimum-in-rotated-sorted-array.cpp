class Solution {
public:
    int findMin(vector<int>& nums) {
        // O(N LogN) approach
        // sort(nums.begin(), nums.end());
        // return nums[0];

        // O(N) approach
        // int temp = nums[0];
        // for(auto &it : nums){
        //     if(it<temp) temp = it;
        // }
        // return temp;

        // O(logN) approach
        int low=0, high =nums.size()-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid] > nums[high]) low=mid+1;          // left side has small values (rotated array)
            else if(nums[mid] < nums[high]) high=mid;       // right side has small value (not rotated)
            else high--;                       // mid value equal to end move towards small
        }
        return nums[low];
    }
};