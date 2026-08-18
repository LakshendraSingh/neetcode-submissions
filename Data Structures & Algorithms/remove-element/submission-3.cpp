class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, nums_size= nums.size();
        for(auto x : nums)
            nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        for(auto x : nums)
            k+=1;
        return k;
    }
};