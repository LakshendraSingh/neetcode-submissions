class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, n_len = nums.size();
        vector<int> x(2);
        for (i = 0; i < n_len; i++) {
            for (j = 0; j < n_len; j++) {
                if (((nums[i] + nums[j]) == target) && i != j) {
                    x[0] = i;
                    x[1] = j;
                    return x;
                }
            }
        }
        return x;
    }
};
