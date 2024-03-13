class Solution {
public:
    #define ll long long
    ll possible(vector<int>& bloomday, int midday, int k){
        ll cnt = 0, cntb = 0;
        for(ll i=0; i<bloomday.size(); i++){
            if(bloomday[i]<=midday) cnt++;
            else{
                cntb += cnt / k;
                cnt = 0;
            }
        }
        cntb += cnt / k;
        return cntb;
    }

    int minDays(vector<int>& bloomday, ll m, ll k) {
        if(bloomday.size()<m*k) return -1;
        ll low = *min_element(bloomday.begin(),bloomday.end());
        ll high = *max_element(bloomday.begin(),bloomday.end());
        ll ans = 0;
        while(low<=high){
            ll mid = (low + high)/2;
            ll temp = possible(bloomday, mid, k);
            if(temp>=m){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
        }
};