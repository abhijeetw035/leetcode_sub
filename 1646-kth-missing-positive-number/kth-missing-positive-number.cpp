// binary search
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k) low = mid + 1;
            else high = mid - 1;
        }
        // return arr[high]+k-(arr[high]-high-1);
        // or
        return high + 1 +k;
    }
};

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
// map method
//         // map<int,int> mp;
//         // int cnt=0;
//         // int maxi = *max_element(arr.begin(), arr.end());
//         // for(auto &it : arr){
//         //     mp[it]++;
//         // }   
//         // int i=1;
//         // while(i<=maxi){
//         //     if(mp.find(i)==mp.end()){
//         //         cnt++;
//         //         if(cnt==k) return i;
//         //     }
//         //     i++;
//         // }
//         // return maxi+k-cnt;

// brute force
//         // for(int i=0; i<arr.size(); i++){
//         //     if(arr[i]<=k) k++;
//         //     else break;
//         // }
//         // return k;
//     }
// };

