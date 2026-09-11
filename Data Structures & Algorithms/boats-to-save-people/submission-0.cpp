class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int count = 0;
        int j = n-1;
        int i = 0;
        while(i <= j) {
            if(people[i] + people[j] <= limit) {
                i++;
                j--;
            } else {
                j--;
            }
            count++;
        }
        return count;
    }
};