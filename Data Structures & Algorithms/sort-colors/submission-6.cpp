class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(auto i = 0; i<n;i++){
            for(auto j = 0; j<n-1;j++)
                if(nums[j]>nums[j+1]) 
                    swap(nums[j],nums[j+1]);
        }
    }
};