class Solution {
public:
    int count = 0;
    void sortColors(vector<int>& nums) {
        vector<int>temp;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 2) {
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i<temp.size(); i++) {
            nums[i] = temp[i];
        }
    }
};