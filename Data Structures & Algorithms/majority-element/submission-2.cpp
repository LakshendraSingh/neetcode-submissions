class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int y, nums_size=nums.size(), maj = (nums_size/2);
        unordered_map <int, int> mp;
        for(auto x:nums){
            mp[x] += 1; 
        }
        for(auto x:mp){
            if(x.second > maj)
            y = x.first;
        }
        return y;
    }
};