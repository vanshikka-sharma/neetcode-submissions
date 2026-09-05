class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n-1; i++) {
            if(nums[i] == nums[i+1]) {
                flag = true;
            }
        }
        return flag;
    }
};