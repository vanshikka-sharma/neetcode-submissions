class Solution {
public:
    int maxArea(vector<int>& heights) {
        int j = 0;
        int k = heights.size() - 1;
        int area = 0;

        while(j < k) {
            int height = min(heights[j], heights[k]);
            int width = k - j;
            int currentArea = height * width;
            area = max(area, currentArea);

            if(heights[j] < heights[k]) {
                j++;
            }
            else {
                k--;
            }
        }
        return area;
    }
};
