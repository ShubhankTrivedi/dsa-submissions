class Solution {
public:
    static bool sortA(pair<int,int> a, pair<int,int> b) {
        if(a.first > b.first) return false;

        return true;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        vector<pair<int,int>> num;
        for(int i =0; i < nums.size(); i++) {
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end(),sortA);
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            if(num[l].first+num[r].first < target){
                l++;
            }else if(num[l].first+num[r].first > target){
                r--;
            }else {
                ans[0] = num[l].second;
                ans[1] = num[r].second;
                sort(ans.begin(),ans.end());
                return ans;
            }
        }
        return ans;
    }
};
