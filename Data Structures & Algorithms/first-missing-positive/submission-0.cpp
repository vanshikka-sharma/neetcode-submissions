class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        int j = 1;
        for(int i = 0; i<n ; i++) {
            if(j == nums[i]) {
                j++;
                count++;
            }
        }
        return count;
    }
};