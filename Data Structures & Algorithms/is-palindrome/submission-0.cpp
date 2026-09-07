class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char ch : s) {
            if(isalnum(ch)) {
                ans += tolower(ch);
            }
        }
        string rev = ans;
        int j = rev.size()-1;
        int n = rev.size();
        for(int i = 0; i<n/2; i++) {
            swap(rev[i], rev[j]);
            j--;
        }
        
        return ans == rev;
    }
};
