class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int n = strs.size();
        int count = 0 ;
        for(int i = 0; i<strs[0].size(); i++) {
            for(int j =1; j<n; j++) {
                if(strs[0][i] == strs[j][i]) {
                    count++;
                } else {
                    return s;
                }
            }
            if(count == n-1) {
                s += (strs[0][i]);
                count = 0;
            }
        }
        return s;
    }
};