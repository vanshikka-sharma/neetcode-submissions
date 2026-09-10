class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 3; i++) {

            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;

            while(j < n - 2) {

                int left = j + 1;
                int right = n - 1;

                while(left < right) {

                    long long sum = (long long)nums[i] +
                                    nums[j] +
                                    nums[left] +
                                    nums[right];

                    if(sum == target) {

                        st.insert({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });

                        left++;
                        right--;

                    }
                    else if(sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }

                j++;
            }
        }

        for(auto x : st) {
            ans.push_back(x);
        }

        return ans;
    }
};