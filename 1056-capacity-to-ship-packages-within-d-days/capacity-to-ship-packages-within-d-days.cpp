class Solution {
public:
    int possible(vector<int> vec, int cap, int days){
        int cnt = 1;
        int temp = 0;
        for(int i=0; i<vec.size(); i++){
            if(temp+vec[i]>cap){
                cnt++;
                temp = vec[i];
            }
            else temp += vec[i];
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            int cal = possible(weights, mid, days);
            if(cal<=days){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};