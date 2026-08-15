class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int n = nums.size();
        for (int i=n-1; i>=0; i--){
            for (int j=0; j<n; j++){
                if (i == j)
                    continue;
                else if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};