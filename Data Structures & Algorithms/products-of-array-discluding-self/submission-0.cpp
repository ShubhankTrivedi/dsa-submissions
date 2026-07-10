class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n),right(n);
        int prev = 1;
        for(int i=0; i< n; i++){
            left[i] = prev * nums[i];
            prev = left[i];
        }
        prev=1;
        for(int i=n-1; i>=0; i--){
            right[i] = prev * nums[i];
            prev = right[i];
        }
        vector<int> res;

        for(int i = 0; i < n; i++) {
            if(i == 0) {
                res.push_back(right[i+1]);
            }else if(i==n-1){
                res.push_back(left[i-1]);
            } else{
                res.push_back(left[i-1] * right[i+1]);
            }
        }
        return res;
    }
};
