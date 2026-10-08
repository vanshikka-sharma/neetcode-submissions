class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        while(true) {
            int mid = start + (end-start)/ 2;
            int result = guess(mid);
            if(result > 0) {
                start = mid + 1;
            } else if(result < 0) {
                start = mid - 1;
            } else {
                return mid;
            }
        }
    }
};