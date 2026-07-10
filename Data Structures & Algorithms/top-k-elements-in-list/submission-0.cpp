
    class Solution {
public:
    static bool sortA(pair<int,int> a, pair<int,int> b) {
        if(a.second>b.second) return true;
        return false;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> res;
        for(auto s: mp){
            res.push_back(s);
        }
        sort(res.begin(),res.end(),sortA);
        vector<int> ans;
        for(int i =0; i<k;i++) {
            ans.push_back(res[i].first);
        }
        return ans;
    }
};

