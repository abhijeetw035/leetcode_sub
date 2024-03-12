class Solution {
public:
    #define ll long long 

    long long eatpiles(vector<int>& piles, long long k){
    long long temp = 0;
    for(long long i=0; i<piles.size(); i++){
        temp += ceil((double)piles[i]/(double)k);
    }
    return temp;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        // long long mid = 0;
        // ll ans = INT_MAX;
        while(low<=high){
            long long mid = (low + high)/2;
            ll totalhours = eatpiles(piles, mid);
            if(totalhours<=h){
                // ans = mid ;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return  low;
    }
};