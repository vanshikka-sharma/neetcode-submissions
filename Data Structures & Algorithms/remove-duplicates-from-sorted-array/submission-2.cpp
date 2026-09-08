class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n-1; i++) {
            if(nums[i] != nums[i+1]) {
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        for(int i = 0; i<ans.size(); i++) {
            count++;
            nums[i] = ans[i];
        }
        return count;
    }
};