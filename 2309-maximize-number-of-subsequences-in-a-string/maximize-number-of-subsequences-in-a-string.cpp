class Solution {
public:
#define ll long long    
    long long maximumSubsequenceCount(string text, string pattern) {
        ll cnt1=0, cnt2=0, ans1=0, ans2=0;
        string text1=pattern[0]+text;
        string text2=text+pattern[1];
        for(int i=0; i<text1.size(); i++){
            if(text1[i]==pattern[0]) cnt1++;
            else if(text1[i]==pattern[1]) ans1 += cnt1;
        }
        if(pattern[0]==pattern[1]){
            ans1=(cnt1*(ans1-1))/2;
        }
        for(int i=text2.size()-1; i>=0; i--){
            if(text2[i]==pattern[1]) cnt2++;
            else if(text2[i]==pattern[0]) ans2 += cnt2;
        }
        if(pattern[0]==pattern[1]){
            ans2=(cnt2*(cnt2-1))/2;
        }
        return max(ans1,ans2);
    }
};