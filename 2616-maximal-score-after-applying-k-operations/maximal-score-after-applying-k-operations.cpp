class Solution {
public:
    #define ll long long
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto &it : nums) pq.push(it);

        ll ans = 0;
        for(int i=0; i<k; i++){
            int temp = pq.top();
            ans += temp;
            pq.pop();
            pq.push(ceil(temp*1.0/3.0
            ));
        }
        return ans;
    }
};