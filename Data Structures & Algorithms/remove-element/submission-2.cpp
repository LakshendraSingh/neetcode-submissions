class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, nums_size= nums.size();
        for(int x : nums)
            nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        for(int x : nums)
            k+=1;
        return k;
    }
};