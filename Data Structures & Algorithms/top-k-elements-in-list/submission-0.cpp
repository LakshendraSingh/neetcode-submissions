class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map <int, int> m;
        for(auto i:nums) 
            m[i]++;
        vector <pair<int, int>> vp;
        for(const auto&  [key, value]:m)
            vp.push_back({value, key});
        sort(vp.rbegin(),vp.rend());
        int vp_size=vp.size();
        vector <int> result;
        for(auto i=0;i<k;i++)
            result.push_back(vp[i].second);
        return result;
    }
};
