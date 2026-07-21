class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        ans[0] = nums[0];
        int prev = nums[0];
        for(int i = 1; i < n; i++) {
            ans[i] = prev;
            prev = prev*nums[i];
        }
        prev = nums[n-1];
        for(int i = n-2;i > 0; i--) {
            ans[i] = ans[i]*prev;
            prev = prev*nums[i];
        }
        ans[0] = prev;
        return ans;
    }
};
