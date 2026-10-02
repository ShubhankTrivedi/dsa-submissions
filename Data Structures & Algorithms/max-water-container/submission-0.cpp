class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size()-1;
        int max = 0;

        while(left < right) {
            int mini = min(heights[left],heights[right]);
            int diff = right - left;
            int units = mini*diff;
            if(units > max) {
                max = units;
            }
            if(heights[left] < heights[right]) left++;
            else right--;
        }

        return max;
    }
};
