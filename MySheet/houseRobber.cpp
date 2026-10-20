class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0;
        int maxx = 0;

        for (int i = 0; i < nums.size(); i++) {
            int temp = max(maxx, prev + nums[i]);
            prev = maxx;
            maxx = temp;
        }

        return maxx;
    }
};