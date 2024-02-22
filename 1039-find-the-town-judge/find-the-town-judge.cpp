class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 and trust.size()==0) return 1;
        unordered_map<int , int> a;
        unordered_map<int , int> cntofb;
        for(int i=0; i<trust.size(); i++){
            a[trust[i][0]] = 1;
            cntofb[trust[i][1]]++;
        }

        for(auto &it : cntofb){
            if(it.second==n-1 and a.find(it.first)==a.end()) return it.first;
        }

        return -1;
    }
};