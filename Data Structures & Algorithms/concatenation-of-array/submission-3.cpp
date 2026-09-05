class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int count = 0; 
        for(int i = 0; i<2*n; i++) {
            if(i == n) {
                i = 0;
                count++;
            }
            if(count == 2) {
                break;
            }
            ans.push_back(nums[i]);
        }
        return ans;
    }
};