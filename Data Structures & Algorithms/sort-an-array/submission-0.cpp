class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int l=0,r=0, i=0, n = nums.size(), m = n/2;
        vector<int> L(m),R(n-m),sorted(n);
        if(n==0 || n==1) return nums;
        for(auto i=0;i<m;i++) L[i]=nums[i];
        for(auto i=m;i<n;i++) R[i-m]=nums[i];
        L = sortArray(L);
        R = sortArray(R);
        int len_l=L.size(), len_r=R.size();
        while(l<len_l && r<len_r){
            if(L[l]<R[r]) {
                sorted[i]=L[l];
                l+=1;
            }else{
                sorted[i]=R[r];
                r+=1;
            }
            i+=1;
        }
        while(l<len_l){
            sorted[i]=L[l];
            i+=1;
            l+=1;
        }
        while(r<len_r){
            sorted[i]=R[r];
            i+=1;
            r+=1;
        }
        return sorted;
    }
};