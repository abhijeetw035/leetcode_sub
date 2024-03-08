class Solution {
public:
    int mySqrt(int x) {
        // // if
        // long low = 0, high = x;
        // long mid;
        // while(low<=high){
        //     mid = (low + high)/2;
        //     if(mid*mid==x) return mid;
        //     else if(mid*mid>x) high = mid - 1 ;
        //     else low = mid + 1;
        // }
        // if(mid*mid>x) return mid-1;
        // return mid;
        long long i=0;
        while(true){
            if(i*i==x) return i;
            else if(i*i>x) return i-1;
            i++;
        } 
        return 0;
    }
};