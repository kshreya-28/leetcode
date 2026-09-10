class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        vector<int> ans(2);

        for(int i = 0; i < nums.size(); i++) {
            int x = abs(nums[i]);

            if(nums[x - 1] < 0) {
                ans[0] = x;
            }

            nums[x - 1] = -abs(nums[x - 1]);
        }

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                ans[1] = i + 1;
            }
        }

        return ans;
    }
};