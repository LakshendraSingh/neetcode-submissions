class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ns = nums.size();
        vector<int> l(ns),r(ns),ans(ns);
        l[0]=1;
        r[ns-1]=1;
        for(auto i=1;i<ns;i++){
            l[i]=nums[i-1]*l[i-1];
        }
        for(auto i=ns-2;i>=0;i--){
            r[i]=nums[i+1]*r[i+1];
        }
        for(auto i=0;i<ns;i++){
            ans[i]=l[i]*r[i];
        }
        return ans;
    }
};
