class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
    if(nums.size()<2) return {-1,-1};
        unordered_map<int,int>freq;
        set<int>st;
        for(int val:nums){
            freq[val]++;
            st.insert(val);
        }
        for(auto it1=st.begin();it1!=st.end();it1++){
            for(auto it2=next(it1);it2!=st.end();it2++){
                int x=*it1;
                int y=*it2;
                if(freq[x]!=freq[y]) return {x,y};
            }
        }
        return {-1,-1};
    }
};